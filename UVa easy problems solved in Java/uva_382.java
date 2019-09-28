import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
    int n,i,j,k,l,m,sum;
    System.out.println("PERFECTION OUTPUT");
    while(sc.hasNext())
    {
        n = sc.nextInt();
        if(n==0)
          break;
        sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
               sum=sum+i;
               //System.out.printf("%d",sum);
        }
        if(sum==n)
        {
            System.out.printf("%5d  PERFECT\n",n);
        }
        else if(sum<n)
        {
            System.out.printf("%5d  DEFICIENT\n",n);
        }
        else
        {
            System.out.printf("%5d  ABUNDANT\n",n);
        }
    }
    System.out.println("END OF OUTPUT");
       
    }
}
