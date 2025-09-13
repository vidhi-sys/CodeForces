// problem : one to infinity
import java.util.*;
public class infinity{
    public static void main(String[] args) {
        int sum=0;
        Scanner sc= new Scanner(System.in);
        Long t=sc.nextLong();
        for(int j=0;j<t;j++){
            Long k=sc.nextLong();
              for(int i=1;i<=k;i++){
                sum+=i;
              }
        System.out.println(sum);
        }
        
        
    }
}