import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
        int n;
    int[] arr = new int[200];
    arr[1] = 1;
    for(int i = 2; i < 101; i++) arr[i] = (i*i)+arr[i-1];

    while(sc.hasNext() )
    {
        n = sc.nextInt();
        if(n == 0) break;
        System.out.println(arr[n]);
    }
    }
}
