#include<iostream>
using namespace std ;
class EX
{
    private:
        int n1;
        int n2;
    public:
        int input();
        int display();
        EX sum(EX,EX);
};
int EX::input()
{
    cout<<"Enter 1st number : ";
    cin>>n1;
    cout<<"Enter 2nd number : ";
    cin>>n2;
}
int EX::display()
{
    cout<<"\nYour 1st number is : "<<n1;
    cout<<"\nYour 2nd number is : "<<n2;

}
EX EX::sum(EX n1,EX n2)
{
    int n3;
    n3.sum = n1.sum + n2.sum;
    cout<<"\n Sum is : "<<n3<<endl;
}
int main()
{

    n1.input();
    n2.input();
    n1.display();
    n2.display();
    n3=n3.sum(n1,n2);
    n3.display();
    return 0;
}
