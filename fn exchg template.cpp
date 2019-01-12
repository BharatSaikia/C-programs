#include<iostream>
using namespace std;
template<class T>
void ex(T &x,T &y)
{
    T temp = x;
    x=y;
    y=temp;
}
template<class A>
void display(A x,A y)
{
    cout<<"x : "<<x<<"  y : "<<y<<endl;
}
int main()
{
    int x = 5 , y = 10;
    cout<<"Before swap : ";
    display(x,y);
    cout<<"After swap : ";
    ex(x,y);
    display(x,y);
    char b='A';
    float c=5.7;
    cout<<"Before swap : ";
    display(b,c);
    cout<<"After swap : ";
    ex(b,c);
    display(b,c);
    return 0;

}
