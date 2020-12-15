#include <iostream>
using namespace std;
struct a{
    typedef char value_type;
    char data='a';
};
template <typename Iter>
void my_swap(Iter a)
{
    typename Iter::value_type tmp=a.data;
    cout << tmp << endl;
}
int main()
{
    a b;
    my_swap(b);
    return 0;
}

