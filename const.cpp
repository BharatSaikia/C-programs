#include<iostream>
using namespace std;
class Array
{
private:
    int *a,size;
public:
    Array()
    {
        size=0;
        a = new int[size];
    }
    Array(int *x)
    {
size=5;
        a = new int[size];
        int i;
        for(i=0;i<size;i++)
        {
            a[i]=x[i];
        }
    }
    void display()
    {
        int i;
        cout<<"Your array is : \n";
        for(i=0;i<size;i++)
            cout<<a[i]<<"\t"<<endl;
    }
};
int main()
{
    int x[] = {1,2,3,4,5};
    int y[] = {2,5,99};
    Array a1(x);
    a1.display();
    Array a2(y);
    a2.display();
    return 0;
}
