import java.util.Scanner;
class QuotientRemainder
{
public static void main(String[] args)
{
int num1;
System.out.println("Enter any integer");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
System.out.println("Remainder is:"+(num1%10));
System.out.println("Quotient is:"+(num1/10));
}
}
