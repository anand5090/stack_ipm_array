#include<iostream>  
#include<conio.h>
using namespace std;
class stack
{
    
    int capacity;
    int top;
    int *ptr;
    public:
    stack(){capacity=0;top=-1;ptr=NULL;}
    stack(int cap)
    {
        capacity=cap;
        top=-1;
        ptr=new int[cap];
    }
    void createArray(int capacity);
    void push(int data);
    void pop();
   void display();
    int  peek();
    //bool isfull();
};
void stack::display()
{
    if(top>=0)
    {
    int i;
    for(i=top;i>=0;i--)
    {
     cout<<ptr[i]<<" ";
    }
    }
    else{
        cout<<"Stack is Empty";
    }
}

int stack ::peek()
{
if(top!=-1)
{
      cout<<"\n Top Element is"<<ptr[top];
 }
}

void stack::pop()
{
    if(top<=-1)
    {
        cout<<"Underflow";
    }
    else
    {
        top=top-1;
    }
}
void stack ::createArray(int cap)
{

      capacity=cap;
        top=-1;
        ptr=new int[cap];
}

/*
bool stack ::isfull()
{
    return top+1==capacity;
}
*/
void stack ::push(int data)
{
    if(top+1==capacity)
    {
   cout<<"Overflow";
    }
    else 
    {
        top=top+1;
        ptr[top]=data;
    }
}
int main()
{
  stack s1;
    s1.createArray(4);

    /*
    s1.push(10);
   s1.push(20);
   s1.push(30);
 //  s1.pop();
  s1.peek();  
    //s1.display();
   */
  int ch,item;
    cout<<"1) push "<<endl;
    cout<<"2 ) pop "<<endl;
    cout<<"3 ) display "<<endl;
    cout<<"4) peek "<<endl;
    cout<<"5 ) Exit "<<endl;
    do
    {
        cout<<"Enter your choice :"<<endl;
        cin>>ch;
        switch(ch)
        {
            
            case 1:
           cout<<"Enter the element";
            cin>>item;
             s1.push(item);
            break;
        case 2: s1.pop();
        break;
        case 3:s1.display();
        break;
        case 4:s1.peek();
        break;
        case 5: cout<<"Exit"<<endl;
        break;
        default:cout<<"invalid choice"<<endl;
    }
    }
    while(ch!=0);
    return 0;
 }
