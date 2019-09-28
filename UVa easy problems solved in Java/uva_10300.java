import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //String s;
        //double a, b, c, d
       int n,a,b,f, ans, cs,c,  i;

	n = sc.nextInt();

	for(cs = 0; cs< n; cs++)
        {
		 ans = 0;
             f = sc.nextInt();
	for(i = 0; i < f; i++)
         {
			a = sc.nextInt();
			b = sc.nextInt();
			c = sc.nextInt();
			ans += a * c;
         }
		System.out.println(ans);
	}
     
 
 
    }
    
}
