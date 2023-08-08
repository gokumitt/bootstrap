import java .io.*;
import java .util.*;
class loop
{
    public static void main (String args[])
    {
        int a,f=1,f1=1,f2=1;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number to find factorial");
        a=sc.nextInt();
        for( int i=1; i<=a; i++)
        {
            f=f*i;
        }
        System.out.println("factorial is "+f);
        int j=1;
        while(j<=a)
        {
        f1=f1*j;
        j++;
        }
        System.out.println("factorial is "+f1);
        int k=1;
       do{
f2=f2*k;
k++;
}
while(k<=a);
System.out.println("factorial is "+f2);
    }
}