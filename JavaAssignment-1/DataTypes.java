import java.util.Scanner;
class DataTypes
{
public static void main(String[] args)
{
int num;
float num1;
char ch;
System.out.println("Enter any integer,float,char values");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
num1=sc.nextFloat();
ch=sc.next().charAt(0);
System.out.println("Entered Integer is:"+num);
System.out.println("Entered float value:"+num1);
System.out.println("Entered char value:"+ch);
}
}
