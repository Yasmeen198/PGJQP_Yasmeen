import java.util.*;
class GreaterOf3
{
public static void main(String[] args)
{
int num1,num2,num3;
System.out.println("Enter 3 numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num3=sc.nextInt();
if((num1>num2)&&(num1>num3))
System.out.println(num1+" is greater");
else if((num1<num2)&&(num2>num3))
System.out.println(num2+" is greater");
else
System.out.println(num3+" is greater");
}
}