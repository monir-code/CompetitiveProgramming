import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //String s;
            long num;
    int i,j,bit,len;
    int[] bin = new int[201];
    while(sc.hasNext())
    {
        num = sc.nextLong();
        if(num<1) break;
        len=1;
        bit=0;
        for(i=1; i<=200; i++)
        {
            bin[i]=(int) num%2;
            if(bin[i]==1) bit++;
            num=num/2;
            if(num==0) break;
            len++;
        }
        System.out.printf("The parity of ");
        for(j=len; j>=1; j--)
        {
            System.out.printf("%d",bin[j]);
        }
        System.out.printf(" is %d (mod 2).\n",bit);

    }
    }
}
