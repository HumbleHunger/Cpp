#include <iostream>
#include <vector>
#include <string>
using namespace std;
template <typename re>
void print(re &arr)
{
    for(auto n : arr){
        cout << n << endl;
    }
}
int main()
{
    char a[]={'s','d','f','g'};
    print(a);
    return 0;
}

