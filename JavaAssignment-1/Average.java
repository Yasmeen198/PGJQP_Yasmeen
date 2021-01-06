import java.util.Scanner;
class Average
{
public static void main(String[] args)
{
float[] num=new float[5];
float sum=0;
System.out.println("Enter 5 numbers");
Scanner sc=new Scanner(System.in);
for(int i=0;i<num.length;i++)
{
num[i]=sc.nextInt();
sum=sum+num[i];
}
System.out.println("Average is:"+(sum/5));
}
}
