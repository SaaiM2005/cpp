#include<iostream>
using namespace std;
class Number
{
        int no;
    public:
        Number()
        {
            no=0;
        }
        Number(int a)
        {
            no=a;
        }
        Number(Number &t)
        {
            no=t.no;
        }
        ~Number(){}
        void set()
        {
            cout<<"\n NO:";
            cin>>no;
        }
        void display()
        {
            cout<<"\nNO:"<<no;
        }
        Number operator+=(int n)
        {   
            no=no+n;
            return *this;
        }
        Number operator-(int n)
        {
            no=no-n;
            return *this;
        }
};

int main()
{
    Number a(3),b,c;
    a.display();
    b+=2;
    b.display();
    return 0;
}
