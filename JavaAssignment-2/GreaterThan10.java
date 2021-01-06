import java.util.*;
class GreaterThan10
{
public static void main(String[] args)
{
int num;
System.out.println("Enter any number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
if(num>10)
System.out.println("Greater than 10");
else
System.out.println("Not greater");
}
}