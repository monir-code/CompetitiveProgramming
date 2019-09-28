import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //String s;
        //double a, b, c, d
    int n;

    while( sc.hasNext() ){
            n =sc.nextInt();
        if((n>=0 && n<=7) || (n<0 && n%2==0)) System.out.println("Underflow!");
        else if(n==8) System.out.println("40320");
        else if(n==9) System.out.println("362880");
        else if(n==10) System.out.println("3628800");
        else if(n==11) System.out.println("39916800");
        else if(n==12) System.out.println("479001600");
        else if(n==13) System.out.println("6227020800");
        else System.out.println("Overflow!");
    }
     
 
 
    }
    
}
