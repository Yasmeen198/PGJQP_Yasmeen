import java.util.*;

class grades
{
public static void main(String[] args)
{
int percentage;
System.out.println("Enter percentage");
Scanner sc=new Scanner(System.in);
percentage=sc.nextInt();
if(percentage>=90)
{
System.out.println("grade A");
}
else if((percentage<90)&&(percentage>=80))
{
System.out.println(" grade B");
}
else if((percentage>=60)&&(percentage<80))
{
System.out.println(" grade C");
}
else if((percentage>=45)&&(percentage<60))
{
System.out.println(" grade D");
}
else
{
System.out.println(" fail");
}
}
}