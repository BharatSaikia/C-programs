#include<iostream>
using namespace std;
template <class T>
class Test
{
private:
    T data;
public:
    Test (T x)
    {
        data = x;
    }
    void display()
    {
        cout<<"Your data is "<<data<<endl;
    }
};
int main()
{
    int x = 3;
    Test<int>t1(x);
    t1.display();
    float y = 5.5;
    Test<float>t2(y);
    t2.display();
    char z = 'A';
    Test<char>t3(z);
    t3.display();
    string s = "Hello world!";
    Test<string>t4(s);
    t4.display();
    return 0;
}
