import java.util.Scanner;
class Add
{
public static void main(String[] args)
{
int a,b,c;
Scanner sc=new Scanner(System.in);
System.out.println("Enter first no.");
a=sc.nextInt();
System.out.println("Enter second no.");
b=sc.nextInt();

c=a+b;
System.out.println("addition of two numbers is : "+c);
}
}