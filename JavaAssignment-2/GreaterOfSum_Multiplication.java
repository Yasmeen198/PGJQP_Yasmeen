import java.util.*;

class GreaterOfSum_Multiplication
{
public static void main(String[] args)
{
int num1,num2,sum,mul;
System.out.println("Enter 2 numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
sum=num1+num2;
mul=num1*num2;
if(sum>mul)
{
System.out.println("Sum is greater than product");
}
else
{
System.out.println("Product is greater than sum");
}
}
}