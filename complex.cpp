#include<iostream>
using namespace std;
class Co
{
private:
        int x,y;
public:
       void input();
       void display();
       Co add(Co,Co);
       Co mul(Co,Co);
};
void Co::input()
{
cout<<"Enter real part";
cin>>x;
cout<<"Enter imaginary part";
cin>>y;
}
void Co::display()
{
cout<<"\nThe values are :  "<<x<<"+i"<<y<<endl;
}
Co Co::add(Co c1,Co c2)
{
Co c3;
c3.x = c1.x + c2.x;
c3.y = c1.y + c2.y;
return c3;
}
Co Co::mul(Co c1,Co c2)
{
Co c3;
c3.x = c1.x*c2.x - c1.y*c2.y;
c3.y = c1.x*c2.y - c1.y*c2.x;
return c3;
}
int main()
{
Co c1,c2,c3,c4;
c1.input();
c2.input();
c3=c3.add(c1,c2);
c4=c4.mul(c1,c2);
c1.display();
c2.display();
c3.display();
c4.display();
}
