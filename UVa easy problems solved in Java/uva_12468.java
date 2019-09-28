import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
 
        int first, second, one = 0, two = 0;

    while (sc.hasNext() )
    {
        first = sc.nextInt();
        second = sc.nextInt();
        if(first == -1) break;
        if (first > second)
        {
            one = first - second;
            two = second + 100 - first;

        }
        else
        {
            one = second - first;
            two = first + 100 - second;
        }
        System.out.printf("%d\n", Math.min(one, two));
    }
    }
}
