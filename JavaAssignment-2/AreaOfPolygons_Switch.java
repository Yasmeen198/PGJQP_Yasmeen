import java.util.*;
class AreaOfPolygons_Switch 
{
public static void main(String[] args)
{
int side,length,breadth;
double radius;
Scanner a= new Scanner(System.in);
System.out.println("Enter a choice 1.Square Area 2.Rectangle Area 3.Circle Area");
int choice=a.nextInt();
switch(choice)
{
case 1 : System.out.println("Enter side of square");side=a.nextInt();System.out.println("Area of square is: "+(side*side));break;
case 2: System.out.println("Enter length and breadth of rectangle");length=a.nextInt();breadth=a.nextInt();System.out.println("Area of rectangle is: "+(length*breadth));break;
case 3 : System.out.println("Enter radius of circle");radius=a.nextDouble();System.out.println("Area of circle is: "+(radius*radius*Math.PI));break;
default : System.out.println("Enter valid input");
}
}
}