#include<iostream>
using namespace std;
int main()
{
    int array[100], n, value, index;
    cout<<"Enter number of elements in array\n"<<endl;
    cin>>n;
    cout<<"Enter elements of array\n"<<endl;
    {
        for(int i = 0 ; i<n ; i++)
        {
            cin>>array[i];
        }
    }
    cout<<"Enter the index where you wish to insert an element\n"<<endl;
    cin>>index;
    cout<<"Enter the value to insert\n"<<endl;
    cin>>value;

    for(int j = n-1 ; j >= index ; j--)
    {
        array[j+1] = array[j];
    }
    array[index] = value;
    cout<<"Resultant array is Submitted by Gokul Mittal - 21BCS1762\n"<<endl;
   for (int i = 0; i <= n; i++)
   {
      cout<<array[i]<<" "; 
         }
   return 0;
}
