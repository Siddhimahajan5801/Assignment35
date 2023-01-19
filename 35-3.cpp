#include<iostream>
using namespace std;
template <typename T>

T largest_num(T a, T b, T c)
{
    if (a>c)
    {
       return (a>b)?a:b;
    }
    else
    {
        return (b>c)?b:c;
    }

}

int main ()
{
   cout<<"The largest number among the three numbers 5,9 and 23 is : "<<largest_num<int>(5,9,23)<<endl;

   cout<<"The largest number among the three numbers 25.9,26.9 and 38.6 is : "<<largest_num<float>(25.9, 26.9, 38.6)<<endl;

   return 0;
}
