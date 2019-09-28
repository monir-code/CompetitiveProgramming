import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
        //double a, b, c, d
        int i,t,a,b;
        //char c;
        while(sc.hasNext())
        {
            t = sc.nextInt();
            for(i=1; i<=t; i++)
            {
                int nr = sc.nextInt();
                int max = 0;
                for(int j=1; j<=nr; j++)
                {
                    max = Math.max(max,sc.nextInt());
                }
                System.out.println("Case "+i+": " +max);
            }
        }

    }
}
