import java.util.Scanner;
class Multiplication
{
public static void main(String[] args)
{
int num1,num2,num3;
System.out.println("Enter 3 integers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num3=sc.nextInt();
System.out.println("Multiplication of Integers is:"+(num1*num2*num3));
}
}
