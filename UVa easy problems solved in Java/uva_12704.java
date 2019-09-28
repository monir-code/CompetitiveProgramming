import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
       int khali;
    khali = sc.nextInt();
    double x, y, r;
    while( sc.hasNext() )
    {
        x = sc.nextInt();
        y = sc.nextInt();
        r = sc.nextInt();
        System.out.printf("%.2f %.2f\n", r - Math.hypot(x, y), r + Math.hypot(x, y));
    }
    }
}
