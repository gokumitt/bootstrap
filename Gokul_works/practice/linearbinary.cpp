#include <iostream> 
using namespace std; 
int main() 
{ 
    int n;   
    cout<<"program by Gokul Mittal 21BCS1762"  ;
    cout<<"\nEnter no. of elements: ";     
    cin>>n; 
    int a[n]; 
    for(int i=0;i<n;i++)
    { 
        cout<<"Enter the value of a["<<i<<"]:";         
        cin>>a[i]; 
    } 
    int choice; 
    cout<<" 1. Linear Search \n 2. Binary Search \n Enter which search you want to perform: ";    
    cin>>choice;     
    switch(choice)
    {         
        case 1:
        int num;
        cout<<"enter value to be searched: ";
        cin>>num;
        for(int i=0;i<n;i++)
        {
        if(num==a[i])
        {
        cout<<"\nFound at position: " <<i;
        }
         }
         return 0;
        case 2:
        int nu, p=0;
        int s=0, l=n;
        int m=(s+l)/2; 
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
        p=a[i];
        a[i]=a[j];
        a[j]=p;
        }
        }
        }
        cout<<"Sorted elements are:\n";         
        for(int i=0;i<n;i++)
        { 
        cout<<a[i]<<endl; 
        }  
        cout<<"enter value to be searched: ";
        cin>>nu;          
        for(int i=s;i<=l;i++)
        {
        if(nu==a[m])
        {   
        int pin=1;
        break;
        }
        else if(nu>a[m])
        {
            s=m+1;
        }
        else if(nu<a[m])
        {
            l=m-1;
        }
         }
         cout<<"\nFound at position: " <<m;
        }         
         return 0;          
}



