import java.io.*;
class A
{
    public void Ademo()
    {
        System.out.println("hello I am from a class a");
    }
}
class B extends A
{
 public void Bdemo()
    {
        System.out.println("hello I am from a class b");
    }
}
public class demo
{
public static void main(String args[])
{
    B bc= new B();
    bc.Ademo();
    bc.Bdemo();
}
}