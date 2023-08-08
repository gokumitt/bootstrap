abstract class lion
{
    public abstract void sound();
}
    class Cat extends lion
    {
    public void sound()
    {
System.out.println("CAT SAYS MEOWW Gokul Mittal 21bcs1762");
    }
}
class dog extends lion
{
    public void sound()
    {
System.out.println("DOG IS BARKING Gokul Mittal 21bcs1762");
}
}
public class test1{
    public static void main(String[]args)
    {
Cat c=new Cat();
dog d=new dog();
c.sound();
d.sound();
    }
}
