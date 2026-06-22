import heapq
 
u, p, a = map(int, input().split())
m = int(input())
 
usb = []
ps = []
 
for _ in range(m):
    c, t = input().split()
    c = int(c)
    if t == "USB":
        heapq.heappush(usb, c)
    else:
        heapq.heappush(ps, c)
 
cnt = 0
cost = 0
 
while u and usb:
    cost += heapq.heappop(usb)
    cnt += 1
    u -= 1
 
while p and ps:
    cost += heapq.heappop(ps)
    cnt += 1
    p -= 1
 
while a and (usb or ps):
    if not ps or (usb and usb[0] < ps[0]):
        cost += heapq.heappop(usb)
    else:
        cost += heapq.heappop(ps)
    cnt += 1
    a -= 1
 
print(cnt, cost)