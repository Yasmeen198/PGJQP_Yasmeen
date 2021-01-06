import java.util.*;

class DivisibleBy9
{
public static void main(String[] args)
{
int num;
System.out.println("Enter number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
if(num%9==0)
{
System.out.println("Divisible by 9");
}
else
{
System.out.println("Not divisible by 9");
}
}
}