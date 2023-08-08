#include <iostream> 
using namespace std; 
int main() 
{ 
    int n;   
    cout<<"program by Gokul Mittal 21BCS1762"  ;
    cout<<"\nEnter no. of elements:";     
    cin>>n; int a[n]; 
    for(int i=0;i<n;i++)
   
 { 
        cout<<"Enter the value of a["<<i<<"]:";         
        cin>>a[i]; 
    } 
    int choice; 
    cout<<"1.Insert a new element at end as well at a given position.\n 2.Delete an element from a given whose value is given or whose position is given.\n 3.To find the location of a given element.\n 4.To display the elements of the linear array. \n Enter Choice: ";     
    cin>>choice;     
    switch(choice)
    {         
        case 1: 
        int last_no,mid_no,p; 
        cout<<"Enter the last number you want to add:";         
        cin>>last_no; 
        cout<<"Enter the position of mid no.";         
        cin>>p; 
        cout<<"Enter the mid number you want to add:";         
        cin>>mid_no;         
        a[n]=last_no;         
        a[p]=mid_no;         
        cout<<"Elements ARE:\n";         
        for(int i=0;i<n+1;i++)
        { 
        
             cout<<a[i]<<endl; 
         }         
         return 0;         
         case 2:         
         int pos; 
        cout<<"Enter the position of elements to delete:";         
        cin>>pos;         
        for(int i=pos;i<n;i++)
        {          
            a[pos]=a[pos+1]; 
        } 
        cout<<"Elements ARE:\n";         
        for(int i=0;i<n-1;i++)
        {           
            cout<<a[i]<<endl; 
        }        
         return 0; 
         case 3:
         int ele,pin,i;
         cout<<"Enter the element to get the position:";
         cin>>ele;
         for(i=0;i<=n;i++)
        {          
            if(ele==a[i])
            {
            pin=1;
            break;
            }
        } 
        if(pin=1)
        cout<<"Found at position " <<i;
        else
        cout<<"not found";
        return 0;
        case 4:
        cout<<"Elements are:\n";    
    for(int i=0;i<n;i++)
    {         
        cout<<a[i]<<endl; 
    }  
    return 0;   
    }        
    return 0; 
}