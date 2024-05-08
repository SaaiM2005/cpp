//HIREARCHICAL INHERITANCE
/*
    ARRAY
      |
    -------
    |     |
STACK    QUEUE  

*/

/*#include<iostream>
#define N 5
using namespace std;
class Array
{
    private:
        int arr[N];
    public:
        Array();
        ~Array(){}
        void set(int pos,int d)
        {
            arr[pos]=d;
        }
        int get(int pos)
        {
            return arr[pos];
        }
};
Array::Array()
{
    for(int i=0;i<N;i++)
    {
        arr[i]=0;
    }
}


class Stack:public Array
{
    protected:
        int top;
    public:
        Stack():Array()
        {
            top=-1;
        }
        ~Stack(){}
        void push(int d)
        {
            if(top==N-1)
            {
                cout<<"\nOVERFLOW.";
            }
            else
            {
                set(++top,d);
            }
        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"\nUNDERFLOW.";
            }
            else
            {
                top--;
            }
            void display();
            void menu();
        }
};
void Stack::display()
{
    if(top==-1)
    {
        cout<<"\nEMPTY STACK.";
    }
    else
    {
        cout<<"\nSTACK DATA:";
        for(int i=top;i>=0;i--)
        {
            cout<<" "<<get(i);
        }
    }
}
void Stack::menu()
{
    int opt,d;
    while(1)
    {
        cout<<"\nSTACK MENU:\n1.PUSH\n2.POP\n3.DISPLAY:\n4.EXIT.\nOPTION:";
        cin>>opt;
        if(opt>3)
        {
            break;
        }
        switch(opt)
        {
            case 1:
                cout<<"\nDATA:";
                cin>>d;
                push(d);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
        }
    }
}

class Queue:public Array
{
    protected:
        int fr,rr;
    public:
        Queue():Array()
        {
            rr=-1;fr=0;
        }
        ~Queue(){}
        void insert(int d)
        {
            if(rr==N-1)
            {
                cout<<"\nOVERFLOW.";
            }
            else
            {
                set(++r,d);
            }
        }
        void remque()
        {
            if(rr<<fr)
            {
                cout<<"\nUNDERFLOW.";
            }
            else
            {
                ++fr;
            }
            void display();
            void menu();
        }
};
void Queue::display()
{
    if(rr<fr)
    {
        cout<<"\nEMPTY QUEUE.";
    }
    else
    {
        cout<<"\nQUEUE DATA:\n";
        for(int i=fr;i<rr;i++)
        {
            cout<<" "<<get(i);
        }
    }
}
void Queue::menu()
{
    int opt,d;
    while(1)
    {
        cout<<"\nSTACK MENU:\n1.INSERT\n2.REMOVE\n3.DISPLAY:\n4.EXIT.\nOPTION:";
        cin>>opt;
        if(opt>3)
        {
            break;
        }
        switch(opt)
        {
            case 1:
                cout<<"\nDATA:";
                cin>>d;
                insert(d);
                break;
            case 2:
                remque();
                break;
            case 3:
                display();
        }
    }
}
int main()
{
    Stack s;
    s.menu();

    
    Queue p;
    p.menu();
    
    return 0;

}
There are several issues in your code. I'll point them out and provide corrections:

Inheritance Syntax: In C++, when inheriting, you need to specify access level for base class members being inherited. By default, they are private, so you need to change it to public.

Typo in Queue's insert Function: You have written set(++r, d) instead of set(++rr, d).

Logic Error in Queue's remque Function: The condition rr<<fr in the remque function should be rr <= fr.

Function Declarations Inside Function Definitions: The declarations for display and menu functions are inside pop and remque functions respectively, which is incorrect. Move them outside the functions.

Loop Condition in Queue's display Function: In the display function of Queue, the loop should include the condition i <= rr.
*/
#include<iostream>
#define N 5
using namespace std;

class Array
{
    private:
        int arr[N];
    public:
        Array();
        ~Array(){}
        void set(int pos,int d)
        {
            arr[pos]=d;
        }
        int get(int pos)
        {
            return arr[pos];
        }
};

Array::Array()
{
    for(int i=0;i<N;i++)
    {
        arr[i]=0;
    }
}

class Stack:public Array
{
    protected:
        int top;
    public:
        Stack():Array()
        {
            top=-1;
        }
        ~Stack(){}
        void push(int d)
        {
            if(top==N-1)
            {
                cout<<"\nOVERFLOW.";
            }
            else
            {
                set(++top,d);
            }
        }
        void pop()
        {
            if(top==-1)
            {
                cout<<"\nUNDERFLOW.";
            }
            else
            {
                top--;
            }
        }
        void display();
        void menu();
};

void Stack::display()
{
    if(top==-1)
    {
        cout<<"\nEMPTY STACK.";
    }
    else
    {
        cout<<"\nSTACK DATA:";
        for(int i=top;i>=0;i--)
        {
            cout<<" "<<get(i);
        }
    }
}

void Stack::menu()
{
    int opt,d;
    while(1)
    {
        cout<<"\nSTACK MENU:\n1.PUSH\n2.POP\n3.DISPLAY:\n4.EXIT.\nOPTION:";
        cin>>opt;
        if(opt>3)
        {
            break;
        }
        switch(opt)
        {
            case 1:
                cout<<"\nDATA:";
                cin>>d;
                push(d);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
        }
    }
}

class Queue:public Array
{
    protected:
        int fr,rr;
    public:
        Queue():Array()
        {
            rr=-1;
            fr=0;
        }
        ~Queue(){}
        void insert(int d)
        {
            if(rr==N-1)
            {
                cout<<"\nOVERFLOW.";
            }
            else
            {
                set(++rr, d);
            }
        }
        void remque()
        {
            if(rr <= fr)
            {
                cout<<"\nUNDERFLOW.";
            }
            else
            {
                ++fr;
            }
        }
        void display();
        void menu();
};

void Queue::display()
{
    if(rr < fr)
    {
        cout<<"\nEMPTY QUEUE.";
    }
    else
    {
        cout<<"\nQUEUE DATA:\n";
        for(int i=fr;i<=rr;i++)
        {
            cout<<" "<<get(i);
        }
    }
}

void Queue::menu()
{
    int opt,d;
    while(1)
    {
        cout<<"\nQUEUE MENU:\n1.INSERT\n2.REMOVE\n3.DISPLAY:\n4.EXIT.\nOPTION:";
        cin>>opt;
        if(opt>3)
        {
            break;
        }
        switch(opt)
        {
            case 1:
                cout<<"\nDATA:";
                cin>>d;
                insert(d);
                break;
            case 2:
                remque();
                break;
            case 3:
                display();
                break;
        }
    }
}

int main()
{
    Stack s;
    s.menu();

    /*
    Queue p;
    p.menu();
    */
    return 0;
}
