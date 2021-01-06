import java.util.*;
class AdditionGreaterThan100
{
public static void main(String[] args)
{
int num1,num2;
System.out.println("Enter 2 numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num1+=num2;
if(num1>100)
System.out.println("Addition is Greater than 100");
else
System.out.println("Addition is  not Greater than 100");
}
}