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
void display(); 
list()  
{
 start = NULL; 
}
}; 
int main()   
{
 int nodes, element, position, i;  
list sl;   
start = NULL; 
sl.insert_pos(); 
sl.display();
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