#include<iostream>
const int MAX=3;
using namespace std;
class M
{
private:
    int a[MAX][MAX];
public:
    void add(M,M);
    void multiply(M,M);
    void input();
    void display();
};
void M::input()
{
    int i,j;
    cout<<"Enter the matrix : \n";
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            cin>>a[i][j];
        }
    }

}
void M::display()
{
    int i,j;
    cout<<"Your matrix is : \n";
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
void M::add(M m1,M m2)
{
    int i,j;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            a[i][j] = m1.a[i][j] + m2.a[i][j];
        }
    }
}
void M::multiply(M m1, M m2)
{
    int i,j,k;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            a[i][j] = 0;
            for(k=0;k<MAX;k++)
            {
                a[i][j] = m1.a[i][k]*m2.a[k][j];
            }
        }
    }
}
int main()
{
    M m1,m2,m3,m4;
    m1.input();
    m2.input();
    m3.add( m1, m2);
    m4.multiply(m1,m2);
    m1.display();
    m2.display();
    m3.display();
    m4.display();
    return 0;
}
