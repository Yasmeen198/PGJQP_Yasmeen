import java.util.*;
class UpperToLower
{
public static void main(String[] args)
{
char ch;
System.out.println("Enter character");
Scanner sc=new Scanner(System.in);
ch=sc.next().charAt(0);
if((ch>=65)&&(ch<=90))
System.out.println("Converting to lowercase : "+((char)(ch+32)));
else if((ch>=97)&&(ch<122))
System.out.println("Converting to uppercase : "+((char)(ch-32)));
else
System.out.println("Enter Alphabet Bruh!");
}
}