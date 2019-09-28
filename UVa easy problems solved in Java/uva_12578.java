//package uva;
import java.util.Scanner;

public class Main{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		double l, w, r, ak, ss;
		long n, i;
		double pi = 3.141592654;
		n = sc.nextLong(); 
		
		for(i = 1; i <= n; i++)
		{
			l = sc.nextDouble(); 
			w=l*.6;
			r=l*.2;
			
			ak =pi*r*r;
			//ss = (l*w-ak);
			System.out.printf("%.2f %.2f\n", ak, (l*w-ak) );
		
		
		}
		 
	}
}