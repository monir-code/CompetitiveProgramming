import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
 
    long t;
    long n;

    while(sc.hasNext())
    {
        n = sc.nextLong();
            if(n==0)
                break;

        t=0;
        while(true)
        {

            while(n!=0)
            {
                t=t+(n%10);
                n=n/10;
            }
            if(t/10==0)
                break;
            else
            {
                n=t;
                t=0;
            }
        }

        System.out.println(t);
    }

    }
}
