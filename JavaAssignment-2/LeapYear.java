import java.util.*;
class LeapYear
{
public static void main(String[] args)
{
int year;
System.out.println("Enter any year");
Scanner sc=new Scanner(System.in);
year=sc.nextInt();
if(((year%4==0)&&(year%100!=0))||(year%400==0))
System.out.println("Leap Year");
else
System.out.println("Not a leap year");
}
}