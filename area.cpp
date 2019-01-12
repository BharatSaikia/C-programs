#include<iostream>
using namespace std;
class Area
{
private:
        float x,y;
public:
        void input();
        void display();
        float dta();
        float dra();
};

void Area::input()
{
cout<<"Enter value 1: ";
cin>>x;
cout<<"Enter value 2: ";
cin>>y;
}

void Area::display()
{
cout<<"\n Your values are "<<x<<"  and  "<<y<<endl;
cout<<"\nTriangle area   "<<dta();
cout<<"\nRectangle area  "<<dra();
}

float Area::dta()
{
return 0.5*x*y;
}
float Area::dra()
{
return x*y;
}
int main()
{
Area a;
a.input();
a.display();
a.dta();
a.dra();
return 0;
}
