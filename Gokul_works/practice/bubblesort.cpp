/*Begin 
Initialize Array and range
Take range of array as input from user
Add all elements in the Array
Taking the inputs from the user using for loop
perform bubble sort using for loop
for (int i=0; i<=range; i++)
if list[i] > list[i+1]
swap(list[i], list[i+1])
print the sorted array using for loop
for (int i=0; i<range; i++)
print sorted elements 
return 0 
end */
#include<iostream>    
using namespace std;    
int main()    
{    
    int i, j,temp;         
    int n;   
    cout<<"Enter size of array - \n"; 
    cin>>n;
    int a[n];
    cout<<"enter the elements - \n";    
    for(i = 0; i < n; i++)    
    {    
       cin>>a[i];     
    }  
     cout<<"Before sorting array elements are - \n"; 
    for(int i = 0; i < n; i++)    
    {    
       cout<<a[i]<<" ";     
    }      
    cout<<"\nAfter sorting array elements are - \n";    
    for(int i = 0; i < n; i++)    
    {    
      for(int j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }
    for(int i = 0; i < n; i++)    
    {    
       cout<<a[i]<<" ";     
    }      
return 0;  
 }  