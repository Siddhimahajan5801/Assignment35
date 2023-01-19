#include<iostream>
using namespace std;
template <typename T>

T array_sum(T *arr)
{
    T sum=0;

    for (int i=0; i<5; i++)
    {
        sum=sum+arr[i];
    }

    return sum;
}


int main ()
{
    int a1[5]= {1,2,3,4,5};

    float a2[5]= {6.5,8.7,8.9,12.9,19.3};

    cout<<"array1 = ";

    for (int i=0; i<5; i++)
    {
        cout<<a1[i]<<"  ";
    }

    cout<<"\nThe sum of array1 is : "<<array_sum<int>(a1);
    cout<<"\n-------------------------------------------\n";

    cout<<"\narray2 = ";

    for (int i=0; i<5; i++)
    {
        cout<<a2[i]<<"  ";
    }

    cout<<"\nThe sum of array2 is : "<<array_sum<float>(a2);

    cout<<"\n-------------------------------------------\n";

    return 0;

}


