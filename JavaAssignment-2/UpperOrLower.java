import java.util.*;
class UpperOrLower
{
public static void main(String[] args)
{
char ch;
System.out.println("Enter character");
Scanner sc=new Scanner(System.in);
ch=sc.next().charAt(0);
if((ch>=65)&&(ch<=90))
System.out.println("Uppercase");
else if((ch>=97)&&(ch<122))
System.out.println("Lowercase");
}
}