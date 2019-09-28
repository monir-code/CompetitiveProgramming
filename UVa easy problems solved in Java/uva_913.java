import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
 
    int n;
    long sum;

    while(sc.hasNext())
    {
        n = sc.nextInt();
        n>>=1;
        sum=-3+(long)6*n*n+(long)12*n;
        System.out.println(sum);
    }

    }
}
