#include<iostream>
using namespace std;
template <typename T>

T Swap(T *arr1, T *arr2)
{
   T temp[5];

   for (int i=0; i<5; i++)
   {
       temp[i]=arr1[i];
       arr1[i]=arr2[i];
       arr2[i]=temp[i];
   }
}

int main ()
{
    int a1[5]= {1,2,3,4,5};

    int a2[5]= {6,7,8,9,10};

    char b1[5]= {'a','b','c','d','e'};

    char b2[5]= {'p','q','r','s','t'};

    cout<<" Before swapping : \n\n";
    cout<<" array1 = ";

    for (int i=0; i<5; i++)
    {
        cout<<a1[i]<<"  ";
    }
    cout<<"\n array2 = ";

    for (int i=0; i<5; i++)
    {
        cout<<a2[i]<<"  ";
    }

    Swap<int>(a1, a2);
    cout<<"\n-------------------------------------------\n";

    cout<<" After  swapping : \n\n";
    cout<<" array1 = ";

    for (int i=0; i<5; i++)
    {
        cout<<a1[i]<<"  ";
    }
    cout<<"\n array2 = ";

    for (int i=0; i<5; i++)
    {
        cout<<a2[i]<<"  ";
    }

    cout<<endl;
    cout<<"\n------------------------------------------\n";

    cout<<" Before swapping : \n\n";
    cout<<" array1 = ";

    for (int i=0; i<5; i++)
    {
        cout<<b1[i]<<"  ";
    }
    cout<<"\n array2 = ";

    for (int i=0; i<5; i++)
    {
        cout<<b2[i]<<"  ";
    }

    Swap<char>(b1, b2);
    cout<<"\n-------------------------------------------\n";

    cout<<" After  swapping : \n\n";
    cout<<" array1 = ";

    for (int i=0; i<5; i++)
    {
        cout<<b1[i]<<"  ";
    }
    cout<<"\n array2 = ";

    for (int i=0; i<5; i++)
    {
        cout<<b2[i]<<"  ";
    }

    cout<<endl;


   return 0;
}
