#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
	   int rno;
	   char nm[15];
	   double mrk;
	public:
		void setData(int a,const char *b,double c)
		{
			rno=a;
			strcpy(nm,b);
			mrk=c;
		}
		void setData(int a)
		{
			rno=a;
			cout<<"\nName:";
			cin>>nm;
			cout<<"\nmarks:";
			cin>>mrk;
		}
		void setData()
		{
			cout<<"\nRoll No:";
			int a;
			cin>>a;
			setData(a);
		}
		void display()
		{
			cout<<"roll no:"<<rno;
			cout<<"\nName:"<<nm;
			cout<<"\nMarks:"<<mrk;
		}
		int getNo()
			{
				return rno;
			}
		double getMarks()
			{
				return mrk;
			}
		};
		int main()
		{
			student a,b,c;
			a.setData(123,"Ganesh",9.2);
			a.display();
			b.setData(31);
			b.display();
			c.setData();
			c.display();
			return 0;
		}