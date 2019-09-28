import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
        long t,a,b,c,i;
    while(sc.hasNext())
    {
        t = sc.nextLong();
        i=1;
        while(i<=t)
        {
            a = sc.nextLong();
            b = sc.nextLong();
            c = sc.nextLong();
            if((a+b)<=c || (b+c)<=a || (c+a)<=b)
                System.out.printf("Case %d: Invalid\n",i);
            else if(a<=0 || b<=0 || c<=0)
                System.out.printf("Case %d: Invalid\n",i);
            else if(a==b && b==c)
                System.out.printf("Case %d: Equilateral\n",i);
            else if(a==b || b==c || c==a)
                System.out.printf("Case %d: Isosceles\n",i);
            else
                System.out.printf("Case %d: Scalene\n",i);
            i++;
        }

    }
    }
}
