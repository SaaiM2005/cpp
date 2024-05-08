#include<iostream>
using namespace std;
class Matrix
{
    private:
        int x[3][3];
    public:
        Matrix();
        Matrix(Matrix &);
        ~Matrix(){}
        friend istream & operator >>(istream &,Matrix &);
        friend ostream & operator <<(ostream &,Matrix &);
        Matrix operator +(Matrix &);
        Matrix operator -(Matrix &);
        Matrix operator *(Matrix &);
        Matrix operator -();
};
Matrix::Matrix()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            x[i][j]=0;
        }
    }
}
Matrix::Matrix(Matrix &t)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            x[i][j]=t.x[i][j];
        }
    }
}
istream & operator >>(istream & in,Matrix &t)
{
    int i,j;
    cout<<"\nMATRIX DATA:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            in>>t.x[i][j];
        }
    }
    return in;
}
ostream & operator <<(ostream & out,Matrix &t)
{
    int i,j;
    out<<"\n MATRIX\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            out<<" "<<t.x[i][j];
        }
        out<<"\n";
    }
    return out;
}
Matrix Matrix::operator+(Matrix &t)
{
    Matrix p;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p.x[i][j]=x[i][j]+t.x[i][j];
        }
    }
    return p;
}
Matrix Matrix::operator-(Matrix &t)
{
    Matrix p;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p.x[i][j]=x[i][j]-t.x[i][j];
        }
    }
    return p;
}
Matrix Matrix::operator*(Matrix &t)
{
    Matrix p;
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                p.x[i][j]+=(x[i][k]*t.x[k][j]);
            }
        }
    }
    return p;
}
void Matrix::operator -()
{
    int i,j,tmp;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            tmp=x[i][j];
            x[i][j]=x[j][i];
            x[j][i]=tmp;
        }
    }
}
int main()
{
    Matrix a,b,c;
    cout<<"\n MATRIX 1:\n";
    cin>>a;
    cout<<"\nMATRIX 2:\n";
    cin>>b;
    c=a+b;
    cout<<a<<b<<c;
    -c;//TRANSPOSE
    cout<<c;
    return 0;
}