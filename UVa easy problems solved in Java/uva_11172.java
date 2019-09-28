import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
 
    int n;
    n = sc.nextInt();
    int a,b;
    for(int i=0;i<n;i++)
    {
        a = sc.nextInt();
        b = sc.nextInt();
        if(a<b) System.out.println("<");
        else if(a>b) System.out.println(">");
        else System.out.println("=");
    }

    }
}
