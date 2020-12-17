#include <iostream>
#include <type_traits>
using namespace std;
template <typename It>
auto f(It beg,It end) -> typename remove_reference<decltype(*beg)>::type
{
    return *beg;
}
template <typename T>
auto sum(const T &a,const T &b) -> decltype(a+b)
{
    return a+b;
}
int main()
{
    std::cout << sum(1,2) << std::endl;
    return 0;
}

