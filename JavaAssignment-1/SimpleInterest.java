import java.util.Scanner;
class SimpleInterest
{
public static void main(String[] args)
{
int Principal,Time,Rate,S_I;
System.out.println("Enter principal,time(in years) and rate");
Scanner sc=new Scanner(System.in);
Principal=sc.nextInt();
Time=sc.nextInt();
Rate=sc.nextInt();
S_I=(Principal*Time*Rate)/100;
System.out.println("Simple Interest is:"+S_I);
}
}
