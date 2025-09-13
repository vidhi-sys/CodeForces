import java.util.Scanner;

public class legs {
    //1996A
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int t=sc.nextInt();
        int legs=0;
        for(int i=0;i<t;i++){
            int n=sc.nextInt();
            //chicken legs=2;
            //cow legs=4;
           if(n%4==0){
            legs=n/4;
           }
           else{
            legs=n/4+1;
           }
            System.out.println(legs);
        }
    }
}
