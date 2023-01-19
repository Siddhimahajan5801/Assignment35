#include<iostream>
using namespace std;
template  <typename T>


T addition (T x, T y)
{
    return (x+y);
}

int main ()
{
    cout<<" The addition of 10 , 25 is   : "<<addition<int>(10,25);
    cout<<"\n\n The addition of 3.2 , 5.7 is : "<<addition<float>(3.2,5.7);
    cout<<"\n\n The addition of 3.2 , 5.7 is : "<<addition<int>(3.2,5.7);
    cout<<endl;

    return 0;

}
