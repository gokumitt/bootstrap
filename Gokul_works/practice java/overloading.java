import java.io.*;
class A{
    public void Ademo()
    {
        System.out.println("hello I am from a class a");
    }
    public void Ademo(int x)
    {
        System.out.println("hello I am from a class b "+x);
    }
    public void Ademo(int x, int b)
    {
        System.out.println("hello I am from a class c "+x+" "+b);
    }
    public void Ademo(String b)
    {
        System.out.println("hello I am from a class d "+b);
    }
    }
    public class overloading
    {
        public static void main(String args[])
        {
            A bc= new A();
            bc.Ademo();
            bc.Ademo(10);
            bc.Ademo(10,20);
            bc.Ademo("gokul");
        }
    }
