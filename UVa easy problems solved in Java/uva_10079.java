import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //String s;
        //double a, b, c, d;
        long a, n;
        while(sc.hasNext())
        {
            n = sc.nextLong();
            if( n>=0 && n<=210000000)
            {
                 a= ((n*(n+1))/2)+1;
                System.out.println(a);
             }
            else if(n<0) break;
            
        }
        
    }
    
}
