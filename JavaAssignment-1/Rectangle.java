import java.util.Scanner;
class Rectangle
{
public static void main(String[] args)
{
int length,breadth;
System.out.println("Enter length and breadth");
Scanner sc=new Scanner(System.in);
length=sc.nextInt();
breadth=sc.nextInt();
System.out.println("Perimeter of rectangle is:"+(2*(length * breadth)));
System.out.println("Area of rectangle is:"+(length * breadth));
}
}
