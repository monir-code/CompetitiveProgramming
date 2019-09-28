import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
       int tc, hj, i, j,n,cur, prev, count=1, tt;

    tc = sc.nextInt();

    for(i = 0; i < tc; i++)
    {

        n = sc.nextInt();
        prev = sc.nextInt();

        hj=j=0;
        for(tt =0; tt<n-1; tt++)
        {
            cur = sc.nextInt();
            if(cur>prev)hj++;
            if(cur<prev)j++;
            prev = cur;
        }

        System.out.printf("Case %d: %d %d\n",count++,hj,j);
    }
    }
}
