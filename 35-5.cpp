
#include<iostream>
using namespace std;
template  <typename t1, typename t2, typename t3>

class Add
{
public:
    t1 x;
    t2 y;

t3 addition ()
{
    return (x+y);
}

};

int main ()
{
    Add <float,int,float>t;

    t.x=5.6;
    t.y=5;

    cout<<"The numbers are :  "<<t.x<<"   "<<t.y<<endl;

    cout<<"\nTheir addition is = "<<t.addition()<<endl;

    return 0;
}

