import java.util.*;
class swapWithout3rdVariable
{
public static void main(String[] args)
{
int num1,num2,temp;
System.out.println("Enter 2 numbers to be swapped");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
System.out.println("----------------Displaying Swapped values\n"+"Value of first number: "+num1+"\n"+"Value of second number: "+num2);
}
}