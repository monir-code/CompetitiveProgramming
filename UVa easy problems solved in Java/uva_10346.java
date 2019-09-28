import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
 
    int n,k,cont,res;

    while(sc.hasNext())
    {
        n = sc.nextInt();
        k = sc.nextInt();
        cont=0;
        res=0;

        while(n>0)
        {
            cont+=n;
            res+=n;
            n=res/k;
            res%=k;
        }

        System.out.printf("%d\n",cont);
    }
    }
}
