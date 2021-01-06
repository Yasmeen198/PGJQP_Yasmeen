import java.util.*;
class Calculator_Switch 
{
public static void main(String[] args)
{
int num1,num2;
Scanner a= new Scanner(System.in);
System.out.println("Enter first number");
num1=a.nextInt();
System.out.println("Enter second number");
num2=a.nextInt();
System.out.println("Enter an operator among +,-,*,/,% ");
char operator=a.next().charAt(0);
int result;
switch(operator)
{
case '+' : result=num1+num2;break;
case '-' : result=num1-num2;break;
case '*' : result=num1*num2;break;
case '/' : result=num1/num2;break;
case '%' : result=num1%num2;break;
default : result=000;
}
System.out.println("Result is: "+result);
}
}