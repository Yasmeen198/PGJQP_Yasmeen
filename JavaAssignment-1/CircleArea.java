import java.util.Scanner;
class CircleArea
{
public static void main(String[] args)
{
float radius;
System.out.println("Enter radius");
Scanner sc=new Scanner(System.in);
radius=sc.nextFloat();
System.out.println("Area of Circle is:"+(radius*radius*Math.PI));
}
}
