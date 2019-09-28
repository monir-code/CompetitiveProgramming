import java.util.Scanner;
public class Main{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		double a, b, sum;
		
		while(sc.hasNext())
		{
		a =sc.nextInt();  
		b =sc.nextInt();  
		 
		sum=2*a*b;
		
		
		System.out.println(sum);
		}
		 
	}
}