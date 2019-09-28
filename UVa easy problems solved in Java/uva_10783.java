import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
        int a,b,c,s,i,j;
    while (sc.hasNext())
    {
        c = sc.nextInt();
        for(i=1; i<=c; i++)
        {
            a = sc.nextInt();
            b = sc.nextInt();
            
            s=0;
            if(a%2==0)
                a=a+1;
            for(j=a; j<=b; j=j+2)
                s+=j;
            System.out.printf("Case %d: %d\n",i,s);
        }
    }
    }
}
