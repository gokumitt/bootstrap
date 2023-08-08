#include <iostream> 
using namespace std; 
struct node 
{ 
int info; 
struct node *next;
 } 
* start; 
class list 
{ 
public:   node *create_node(int);  
void insert_pos(); 
void delete_pos(); 
void sort(); 
void search(); 
void display(); 
list()  
{
 start = NULL; 
}
}; 
int main()   
{
 int choice, nodes, element, position, i;  
list sl;   
start = NULL;  
while (1)    
{ 
cout<< "Performing operations on Linked Lists." << endl; 
cout << endl<< "---------------------------------" << endl;   
cout << "1.Insert a new element" << endl<< "2.Delete an existing element" << endl<< "3.Search  an Element" << endl<< "4.Display all element" << endl<< "5.Exit " << endl<< "Enter choice : ";
 cin >> choice; 
switch (choice)   
{ 
case 1: cout << "Inserting an element:" << endl; 
sl.insert_pos(); 
cout << endl; 
break;   
case 2: cout << "Delete a particular element: " << endl; 
sl.delete_pos(); 
break; 
case 3: cout << "Searching an element: " << endl; 
sl.search();
 cout << endl; 
break;  
case 4: cout << "Displaying all elements" << endl;  
sl.display(); 
cout << endl; 
break;   
case 5: cout << "Exit the list" << endl; 
exit(1); 
break; 
default: cout << "Invalid choice" << endl; 
}
}
} 
node *list::create_node(int value)   
{ 
struct node *temp, *s; 
temp = new (struct node); 
if  (temp == NULL)   
{
 cout << "Memory not allocated " << endl; 
return  0; 
}      
else 
{ 
temp->info = value; 
temp->next = NULL; 
return temp; 
}
} 
void list::insert_pos() 
{
 int value, pos, counter = 0; 
cout << "Enter the value to be inserted: ";
 cin >> value; struct node *temp, *s, *ptr; 
temp = create_node(value); 
cout << "Enter postion : "; 
cin >> pos;   
int i; s =  start;   
while (s != NULL) 
{ 
s = s->next; 
counter++; 
} 
if (pos == 1) 
{ 
if (start == NULL) 
{ 
start = temp; 
start->next = NULL; 
} 
else 
{ 
ptr = start; 
start = temp; 
start->next = ptr; 
}
} 
else if (pos > 1 && pos <= counter)   
{
 s = start;  
for (i = 1; i < pos; i++) 
{ 
ptr = s; 
s = s->next; 
} 
ptr->next = temp; 
temp->next = s; 
} 
else   
{ 
cout << "Positon out of range" << endl; 
}
} 
void list::delete_pos() 
{ 
int pos, i, counter = 0; 
if (start == NULL) 
{ 
cout << "List is empty" << endl; 
return; 
}   
cout << "Enter the position of value to be deleted: "; 
cin >> pos; 
struct node *s, *ptr; 
s = start; 
if (pos ==  1) 
{ 
start = s->next; 
} 
else   
{ 
while (s != NULL) 
{ 
s = s->next; 
counter++;
 } 
if (pos > 0  && pos <= counter)   
{ 
s = start; 
for (i = 1; i  < pos; i++) 
{ 
ptr = s; 
s  = s->next; 
} 
ptr->next  = s->next; 
} 
else   
{ 
cout << "Position out of range" << endl; 
} 
free(s); 
cout << "Element Deleted" << endl; 
}
} 
void list::search() 
{ 
int value, pos = 0; 
bool flag = false; 
if (start == NULL)   
{ 
cout << "List is empty" << endl; 
return;  
} 
cout << "Enter the value to be searched: "; 
cin >> value; 
struct node *s; 
s = start;  
while (s != NULL)  
{ 
pos++; 
if (s->info == value) 
{ 
flag = true;   
cout << "Element " << value << " is found at position"<<pos<<endl; 
} 
s  = s->next; 
} 
if (!flag)  
cout << "Element " << value << " not found in the list" << endl; 
} 
void  list::display()   
{ 
struct node *temp; 
if (start == NULL) 
{ 
cout << "The List is Empty" << endl; 
return; 
} 
temp = start; 
cout <<  "Elements of list are: " << endl; 
while  (temp != NULL) 
{ 
cout << temp->info  << "->"; 
temp = temp->next; 
} 
cout <<  "NULL" << endl; 
}   
