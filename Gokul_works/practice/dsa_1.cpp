#include <iostream>
using namespace std;
int arr[10];
void display(int a)
{
    cout<<"elements in the linear array are ";
    for(int i=0;i<a;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
}
void add(int a, int b,int c)
{
    arr[9]=a;
    arr[b]=c;
}
void del( int a)
{
    for(int i=a;i<10;i++)
    {
     arr[i]=arr[i+1];
    }
}
void find(int a)
{
    int i,pin;
    for(i=0;i<10;i++)
        {          
            if(arr[i]==a)
            {
            pin=1;
            break;
            }
        } 
        if(pin==1)
        cout<<"Found at position " <<i;
        else
        cout<<"not found";
}
void findbinary(int a)
{
    int i,s=0;
    int l=10;
    int m=(l+s)/2;
    for(i=s;i<=l;i++)
        {          
            if(a==arr[m])
            {
            cout<<"Found at position " <<m;
            break;
            }
            else if(a>arr[m])
            {
                s=m+1;
            }
            else if(a<arr[m])
            {
                l=m-1;
                m=(l+s)/2;
            }
        }
}
int main()
{
    int m,p,ch,end;
    cout<<"enter elements of the array \n";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        cout<<" ";
    }
    while(1)
    {
    cout<<"\nChoices are \n1.Insert a new element at end as well at a given position.\n 2.Delete an element from a given whose value is given or whose position is given.\n 3.To find the location of a given element.\n 4. To perform Binary search. \nEnter Choice: ";     
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Enter element to enter"<<endl;
        cin>>m;
        cout<<"Enter position at which element is to be added"<<endl;
        cin>>p;
        cout<<"Enter element to enter at end"<<endl;
        cin>>end;
        add(end,p,m);
        display(10);
        break;
        case 2:
        int pos;
        cout<<"enter position of the element to delete";
        cin>>pos;
        del(pos);
        display(9);
        break;
        case 3:
         int ele;
         cout<<"Enter the element to get the position:";
         cin>>ele;
         find(ele);
         break;
         case 4:
         int e;
         cout<<"enter element to find in the array"<<endl;
         cin>>e;
         findbinary(e);
         break;
         default:
         cout<<"invalid input";
    }
}
}