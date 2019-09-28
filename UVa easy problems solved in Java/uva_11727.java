import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //String s;
        //double a, b, c, d
        int t,i,a,b,c,ans = 0;
        while( sc.hasNext())
        {
            t = sc.nextInt();
            for(i=1; i<=t; i++)
            {
                a = sc.nextInt();
                 b = sc.nextInt();
                 c = sc.nextInt();
                if(a>1000||a<10000)
                {
                    if(b>1000||b<10000)
                    {
                         if(c>1000||c<10000)
                        {
                         if((a>b && a<c)||(a<b&&a>c))
                            ans=a;
                         else if((b>a&&b<c)||(b<a&&b>c))
                            ans=b;
                         else if((c>b && c<a)||(c<b)&&c>a)
                            ans=c;
                        }
                    }
                }
            System.out.printf("Case %d: %d\n", i, ans);

            }

        }
     
 
 
    }
    
}
