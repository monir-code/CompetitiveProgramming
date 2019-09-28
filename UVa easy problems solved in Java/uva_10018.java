import java.util.Scanner;
public class Main {
    public static long reverInt(long x)
{
    long rn=0;
    while(x > 0)
    {
        rn*= 10;
        rn += x%10;
        x/= 10;
    }
 
    return rn;
}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //String s;
        //double a, b, c, d;
        long a, n, N, rn=0, nrev=0, p;
        
        N = sc.nextLong();
        for (int i=0; i<N; i++)
        {
 
        
         n = sc.nextLong();
         
         p = reverInt(n);
         nrev=0;
        while(reverInt(n) != n)
        {
            nrev++;
            n += reverInt(n);
        }

        System.out.println(nrev+" "+n);
     
 
 
    }
 
        
        
        
        
        
    }
    
}
