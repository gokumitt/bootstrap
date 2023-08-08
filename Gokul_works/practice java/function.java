import java .io.*;
 class function
 {
 public static int calsum(int num1, int num2)
    {
        int res;
        res = num1+num2;
        return (res);
    }

 public static void main (String args[])
    {
        int sum;
        sum = calsum(10,20);
        System.out.println("the sum is " +sum);
    }
 }