import java.util.Scanner;

public class square {
    //1915C: can i sqaure
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
             long sum=0;
            for(int i=0;i<n;i++){
                long x=sc.nextLong();
               
                sum+=x;}
                long sq=(long)Math.sqrt(sum);
                if(sq*sq==sum){
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
               


            
             
        }
        
    }

}
