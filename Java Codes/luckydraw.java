import java.util.*;
class luckydraw
{
 public static void main(String args[])
  {
    int i,n,r; 
    Scanner in=new Scanner(System.in);
    Random rand= new Random();
    r=rand.nextInt(100);
    System.out.println("choose any number between 0 to 10:");
    n=in.nextInt();
    if(n==r)
     {
        System.out.println("your are the luck winner");
        
     }
    else
     {
        System.out.println("better luck next time !!!");
System.out.println("computer choosen number is:"+r);
     }
}
}
