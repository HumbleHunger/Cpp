#include <iostream>
using namespace std;
template <typename type,int size>
type * my_begin(type (&arry)[size])
{
    return &arry[0];    
}
template <typename type,int size>
type * my_end(type (&arry)[size])
{
    return &arry[size];    
}
int main()
{
    char a[]={'a','b','c','d'};
    cout << *(my_begin(a)) << *(my_end(a)-1) << endl;
    return 0;
}

