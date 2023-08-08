#include<iostream>
using namespace std;
int main ()
{
    char arr[10], ele;
    int i, n, pos;
    cout << "Enter size of the array : ";
    cin >> n;
    cout << "\nEnter elements of the array : ";
    for (i = 1; i <= n; i++)
        cin >> arr[i];
    cout << "\nEnter the position : ";
    cin >> pos;
    for (i = 1; i <= n; i++)
        if (pos == i)
            ele = arr[i];
    cout << "\nElement at position " << pos << " is : " << ele<<endl;
    cout<<"Gokul Mittal - 21BCS1762";
    return 0;
}
