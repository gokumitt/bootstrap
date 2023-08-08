class OS
{
 void type()
 {
System.out.println("lenovo Gokul Mittal 21bcs1762");
 }
}
    class phone extends OS
    {
     void read()
    {
System.out.println("PC Gokul Mittal 21bcs1762");
    }
    void sound()
    {
System.out.println("SONG Gokul Mittal 21bcs1762");
}
}
public class laptop
{
    public static void main(String[]args)
    {
phone p= new phone();
p.type();
p.read();
p.sound();
    }
}