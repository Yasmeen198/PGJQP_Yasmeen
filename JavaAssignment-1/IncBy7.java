import java.util.Scanner;
class IncBy7
{
public static void main(String[] args)
{
int num;
System.out.println("Enter any integer");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
System.out.println("Entered Integer is:"+num);
for(int i=0;i<7;i++)
{
++num;
}
System.out.println("Incremented value:"+num);
}
}
