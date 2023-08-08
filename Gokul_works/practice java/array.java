import java.util.*;
class array
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
            int size,t;
            System.out.println("enter size of the array");
            size=sc.nextInt();
            int arr[]=new int[size];
            System.out.println("enter elements of the array");
            for(int i=0;i<size;i++)
            {
                arr[i]=sc.nextInt();
            }
            System.out.println("entered elements of the array");
            for(int i=0;i<size;i++)
            {
                System.out.println(arr[i]);
            }
            for(int i=0;i<size;i++)
            {
                for(int j=i+1;j<size;j++)
                {
                    if(arr[j]<arr[i])
                    {
                     t=arr[i];
                     arr[i]=arr[j];
                    arr[j]=t;
                    }
                }
            }
                System.out.println("Sorted elements of the array");
            for(int i=0;i<size;i++)
            {
                System.out.println(arr[i]);
            }

    }
}