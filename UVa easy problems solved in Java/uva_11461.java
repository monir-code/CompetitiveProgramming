import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
 
    int a,b,d;
    double c;
    while( sc.hasNext() )
    {
        a = sc.nextInt();
        b = sc.nextInt();
        if(a == 0 && b == 0) break;

        d=0;

        for(; a<=b; a++)
        {
            c=Math.sqrt(a);
            if (a ==(int)c*(int)c)
                ++d;
        }
        System.out.println(d);
    }

    }
}
