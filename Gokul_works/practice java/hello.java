import java.util.*;
class hello
{
    public static void main(String[] args)
    {
int km;
double fare,total,gst,toll;
String tn;
String dn,dl;
Scanner sc=new Scanner(System.in);
System.out.println("enter taxi km driven");
km=sc.nextInt();
System.out.println("enter taxi number");
tn=sc.next();
System.out.println("enter driver name");
dn=sc.next();
System.out.println("enter Dl no.");
dl=sc.next();
if(km>0 && km<=100)
{
fare= 1000+(km*15);
}
else if(km>100 && km<=500)
{
    fare=1000+((km-100)*14)+ (100*15);
}
else if(km>500 && km<=1000)
{
    fare=1000+((100)*15)+ ((400)*14)+ ((km-500)*12);
}
else
{
    fare=1000+(100*15)+ (400*14)+ (500*12)+((km-1000)*10);
}
gst=fare* 0.18;
toll=fare* 0.08;
total=fare+gst+toll;
System.out.println("km driven is "+km);
System.out.println("taxi number is "+tn);
System.out.println("driver name is "+dn);
System.out.println("Dl no. is "+dl);
System.out.println("gst is "+gst);
System.out.println("toll is "+toll);
System.out.println("total fare is "+total);
    }
}
