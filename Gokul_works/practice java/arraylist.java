import java.util.*;
public class arraylist {
    public static void main(String[] args)
    {
    ArrayList<Integer> list=new ArrayList<>(); 

    list.add(9); 
    list.add(4);
    list.add(7);
    list.add(4);
    ArrayList<Integer> list2=new ArrayList<>();
    {
    list2.add(8); 
    list2.add(6);
    list2.add(1);
    list2.add(5);
    list2.add(2);    
}
    list.addAll(list2);
    System.out.println("\n"+list);
    System.out.println(list.indexOf(4));
    System.out.println(list.contains(4));
    System.out.println("Gokul Mittal - 21BCS1762");
    }
}
