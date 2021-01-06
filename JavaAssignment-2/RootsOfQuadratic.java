import java.util.*;

class RootsOfQuadratic
{
public static void main(String[] args)
{
double a,b,c,disc,x1,x2,real,imag;
System.out.println("Enter 3 co-efficients(a,b,c)");
Scanner sc=new Scanner(System.in);
a=sc.nextInt();
b=sc.nextInt();
c=sc.nextInt();
disc=(b*b)-(4*a*c);
if(disc>0)
{
x1=(-b+(Math.sqrt(disc)))/(2*a);
x2=(-b-(Math.sqrt(disc)))/(2*a);
System.out.println("Roots are"+x1+" "+x2);
}
else if(disc==0)
{
x1=-b/(2*a);
System.out.println("Roots are x1=x2="+x1);
}
else
{
real=-b/(2*a);
imag=(Math.sqrt(-disc))/(2*a);
System.out.println("x1="+real+"+"+imag);
System.out.println("x2="+real+"-"+imag);
}
}
}