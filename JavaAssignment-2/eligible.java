import java.util.*;
class eligible
{
public static void main(String[] args)
{
byte age;
System.out.println("Enter your age");
Scanner sc=new Scanner(System.in);
age=sc.nextByte();
if(age>=18)
System.out.println("Eligible for voting");
else
System.out.println("Not eligible");
}
}