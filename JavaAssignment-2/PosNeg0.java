import java.util.*;
class PosNeg0
{
public static void main(String[] args)
{
int num1;
System.out.println("Enter any number");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
if(num1>0)
System.out.println(num1+" is positive");
else if(num1<0)
System.out.println(num1+" is negative");
else
System.out.println(num1+" is zero");
}
}