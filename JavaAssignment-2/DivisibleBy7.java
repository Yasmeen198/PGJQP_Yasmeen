import java.util.*;

class DivisibleBy7
{
public static void main(String[] args)
{
int num;
System.out.println("Enter number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
if(num%7==0)
{
System.out.println("Divisible by 7");
}
else
{
System.out.println("Not divisible by 7");
}
}
}