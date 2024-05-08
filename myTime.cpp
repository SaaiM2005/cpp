//program to implement my TIME
#include<iostream>
using namespace std;
class MyTime
{   
    private:
        int s,m,h;
        long int toSeconds()
        {
            return h*3600l+m*60+s;//hrs and min into SECONDS
        }
    public:
        MyTime()
        {
            h=m=s=0;
        }
        MyTime(int a,int b=0,int c=0)//PARAMATERIZED CONSTRUCTOR
        {
            h=a;m=b;s=c;
        }
        MyTime(long int z)//PARAMETRIZED CONSTRUCTOR FUNCTION
        {
            h=z/3600;//calculates HOURS 
            z=z%3600;
            m=z/60;
            s=z%60;
        }
        MyTime(MyTime &t)//COPY CONSTRUCTOR
        {
            h=t.h;
            m=t.m;
            s=t.s;
        }
        ~MyTime(){}
        void setTime()
        {
            cout<<"\nHOURS:";
            cin>>h;
            cout<<"\nMINUTES:";
            cin>>m;
            cout<<"\nSECONDS:";
            cin>>s;
        }
        void setTime(int a,int b=0,int c=0)
        {
            h=a;m=b;s=c;
        }
        void setTime(long int z)
        {
            h=z/3600;
            z=z%3600;
            m=z/60;
            s=z%60;
        }
        void display()
        {
            cout<<"\nHOURS:"<<h;
            cout<<"\nMINUTES:"<<m;
            cout<<"\nSECONDS:"<<s;
        }
        MyTime add(MyTime &t)//c=a.add(b);
        {
            long int p=toSeconds();
            long int q=t.toSeconds();
            long int r=p+q;
            MyTime k(r);
            return k;
        }
        MyTime sub(MyTime &t)//c=a.sub(b);
        {
            long int p=toSeconds();
            long int q=t.toSeconds();
            long int r=labs(p-q);//labs=long absolute
            MyTime k(r);
            return k;
        }
        int getHr()
        {
            return h;
        }
        int getMn()
        {
            return m;
        }
        int getSs()
        {
            return s;
        }
        int isMore(MyTime &t)
        {
            return toSeconds()>t.toSeconds();
        }
        int isLess(MyTime &t)
        {
            return toSeconds()<t.toSeconds();
        }
};
int main()
{
    MyTime p,q,r;
    p.setTime();
    q.setTime();
    p.display();

    
    q.display();
    r=p.add(q);
    r.display();
    if(p.isMore(q))
    {
        cout<<"\nP BIG.";
    }
    else
    {
        cout<<"\nQ BIG.";
    }
    return 0;
}