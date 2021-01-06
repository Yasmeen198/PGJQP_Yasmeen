import java.util.Scanner;
class IncBy1
{
public static void main(String[] args)
{
int num;
System.out.println("Enter any integer");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
System.out.println("Entered Integer is:"+num);
System.out.println("Incremented value:"+(++num));
}
}
