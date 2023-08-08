#include <iostream>
using namespace std;
int queue[5], n=5, top=-1,rear=-1;
void push(int val) {
   if(rear==n-1)
   cout<<"Queue Overflow"<<endl;
   else {
      rear++;
      queue[rear]=val;
   }
   if(top==-1)
   top++;
}
void pop() {
   if(rear==-1)
   cout<<"queue Underflow"<<endl;
   else {
      cout<<"The popped element is "<< queue[top] <<endl;
      top++;
   }
}
void display() {
   if(rear>=0) {
      cout<<"queue elements are:";
      for(int i=top; i<=rear; i++)
      cout<<queue[i]<<" ";
      cout<<endl;
   } else
   cout<<"queue is empty";
}
int main() {
   int ch, val;
   cout<<"1) Push in queue"<<endl;
   cout<<"2) Pop from queue"<<endl;
   cout<<"3) Display queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }
   while(ch!=4);
   return 0;
}