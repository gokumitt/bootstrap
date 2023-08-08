#include<iostream>
using namespace std;
#define size 5
int main()
{
    int arr[size] = {1, 2, 3, 4, 5};
    int key, i, index = -1;

    cout<<"Enter element to delete\n"<<endl;
    cin>>key;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        for(i = index; i < size - 1; i++)
            arr[i] = arr[i+1];

        cout<<"New Array : "<<endl;
        for(i = 0; i < size - 1; i++)
           { cout<<arr[i]<<" ";}
            cout<<"\n21BCS1762-Gokul Mittal"<<endl;
    }
    else
        cout<<"Element Not Found\n";

    return 0;
}

