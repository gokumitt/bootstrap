import java.util.*; 
public class palindrome 
{ 
     public static void main(String[] args) 
     { 
 	System.out.println("Gokul Mittal\n 21bcs1762"); 
    Scanner sc =new Scanner(System.in);
    System.out.println("Enter a String"); 
    String A = sc.nextLine(); 
    StringBuffer B= new StringBuffer(A); 
    B.reverse(); 
    String D = String.valueOf(B);     
    if(A.equals(D)==true)
    System.out.println("Palindrome");    
    else  
    System.out.println("Not Palindrome"); 
} 
} 
