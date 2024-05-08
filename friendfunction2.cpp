//Regular function FRIEND FOR BOTH THE CLASSES
#include<iostream>
using namespace std;
class B;//forward declaration
class A
{
    int a;
    public:
        void set()
        {
            cout<<"\n A a:";
            cin>>a;
        }
        void display()
        {
            cout<<"\n A a:"<<a;
        }
        friend void swap(A &,B &);
};
class B
{
    int b;
    public:
        void set()
        {
            cout<<"\n B b:";
            cin>>b;
        }
        void display()
        {
            cout<<"\n B b:"<<b;
        }
        friend  void swap(A &,B &);
};
void swap(A &p,B &q)
{
    int tmp=p.a;
    p.a=q.b;
    q.b=tmp;
}
int main()
{
    A obja;
    B objb;
    obja.set();
    objb.set();
    obja.display();
    objb.display();
    swap(obja,objb);
    obja.display();
    objb.display();
    return 0;
}