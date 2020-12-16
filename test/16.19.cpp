#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <iterator>
using namespace std;
template <typename T>
void print(const T& d)
{
    typename T::size_type i=d.size();
    typename T::const_iterator iter=d.begin();
    while(i--){
        cout << *iter++ << endl;
    }
}
int main()
{
    list<int> l={1,2,3,4,5,6,7,8,9,10};
    print(l);
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    print(v);
    string s="asdasdasdasdasdgs";
    print(s);

    return 0;
}

