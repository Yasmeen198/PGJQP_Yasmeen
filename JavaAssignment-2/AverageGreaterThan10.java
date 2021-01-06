import java.util.*;
class AverageGreaterThan10
{
public static void main(String[] args)
{
int i,sum=0,average;
int[] num=new int[5];
System.out.println("Enter 5 numbers");
Scanner sc=new Scanner(System.in);
for(i=0;i<num.length;i++)
{
num[i]=sc.nextInt();
sum=sum+num[i];
}
average=sum/5;
if(average>10)
System.out.println("Average is Greater than 10");
else
System.out.println("Average is  not Greater than 10");
}
}