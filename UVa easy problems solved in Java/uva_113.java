//package uva;

import java.util.Scanner;

public class Main {
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		double a, b, sum;
		
		while(sc.hasNext())
		{
		a =sc.nextDouble();  
		b =sc.nextDouble();  
		
		//sum = 
		 
		sum= Math.pow(b,1/a);
		sum = Math.round(sum);
		
		System.out.println((int)sum);
		}
		 
	}

}
