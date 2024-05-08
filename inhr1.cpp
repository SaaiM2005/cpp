#include<iostream>
using namespace std;
class Number
{
    private:
        int no;
    public:
        void setData()
        {
            cout<<"\nENTER NO:";
            cin>>no;
        }
        void setData(int a)
        {
            no=a;
        }
        void display()
        {
            cout<<"\nNO:"<<no;
        }
        int getNo()
        {
            return no;
        }
};
class ExNumber:public Number//SYNTAX
{
    public:
        void Table();
        void OddEven();
};
void ExNumber::Table()
{
    int i=1;
    int n=getNo();
    cout<<"\nTABLE:";
    while(i<=10)
    {
        cout<<" "<<n*i;
        i++;
    }
}
void ExNumber::OddEven()
{
    if(getNo()%2==0)
    {
        cout<<"\nNUMBER IS EVEN";
    }
    else
    {
        cout<<"\nNUMBER IS ODD";
    }
}
int main()
{
    Number a;
    a.setData();
    a.display();
    ExNumber b;
    b.setData();//REUSIBLITY
    b.display();
    b.Table();
    b.OddEven();
    return 0;
}