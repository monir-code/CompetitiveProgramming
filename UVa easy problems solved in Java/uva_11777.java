import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
 
    int t1,t2,f,at,ct1,ct2,ct3,c = 0,d,n,i;
    while(sc.hasNext() )
    {
        n = sc.nextInt();
        for(i=1; i<=n; i++)
        {
            t1 = sc.nextInt();
            t2 = sc.nextInt();
            f = sc.nextInt();
            at = sc.nextInt();
            ct1 = sc.nextInt();
            ct2 = sc.nextInt();
            ct3 = sc.nextInt();
            if(ct1<=ct2 && ct1<=ct3)
                c=(ct2+ct3)/2;
            else if(ct2<=ct1 && ct2<=ct3)
                c=(ct1+ct3)/2;
            else if(ct3<=ct1 && ct3<=ct2)
                c=(ct1+ct2)/2;
            d=t1+t2+f+at+c;
            if(d>=90)
                System.out.printf("Case %d: A\n",i);
            else if(d>=80)
                System.out.printf("Case %d: B\n",i);
            else if(d>=70)
                System.out.printf("Case %d: C\n",i);
            else if(d>=60)
                System.out.printf("Case %d: D\n",i);
            else if(d<60)
                System.out.printf("Case %d: F\n",i);
        }
    }
    }
}
