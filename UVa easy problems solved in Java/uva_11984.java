import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i, t;
        double a, b, c, d;
        while(sc.hasNext())
        {
            t = sc.nextInt();
            for(i = 1; i <= t; i++)
            {
                c = sc.nextInt();
                d = sc.nextInt();
                a = 9.0*c/5.0+d;
                b = a*5/9.0;
                
                System.out.printf("Case %d: %.2f\n",i,b);
            }
        }
        
    }
    
}
