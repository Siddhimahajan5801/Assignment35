#include<iostream>
using namespace std;
template <typename T>


    T max_num(T x , T y)
    {
        return (x>y)?x:y;
    }

   int main()
{
    cout<<"The largest number between two numbers (5.6, 9.6) is : "<<max_num<float>(5.6,9.6)<<endl<<endl;

    cout<<"The largest number between two numbers (8,3) is : "<<max_num<int>(8,3)<<endl;

    return 0;
}
