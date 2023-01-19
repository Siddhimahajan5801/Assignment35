#include<iostream>
using namespace std;

class Base
{
public:
    void Addition (int x,int y) {}
};

template <class T>
class Derived : public Base
{
public:

    void Addition (T x, T y) //overloaded the previous one!
    {
        cout<<(x+y)<<endl;
    }
};

int main ()
{
    Derived <int>obj1;
    Derived <float>obj2;


    cout<<"5 + 6 = ";
    obj1.Addition(5,6);

    cout<<endl<<endl;

    cout<<"3.63 + 9.44 = ";
    obj2.Addition(3.63,9.44);

    cout<<endl<<endl;

    return 0;
}
