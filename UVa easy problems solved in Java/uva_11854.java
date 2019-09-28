import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
        //double a, b, c, d
        int a,b,c,as,bs,cs;
        while(true)
        {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            if(a==0&&b==0&&c==0)break;
            as =a*a;
            bs =b*b;
            cs =c*c;
            if((as+bs==cs)||(bs+cs==as)||(cs+as==bs))
                System.out.println("right");
            else  System.out.println("wrong");
        }



    }

}
