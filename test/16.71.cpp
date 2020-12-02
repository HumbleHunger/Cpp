#include <iostream>
#include <vector>
using namespace std;
template <typename T> 
class Blob {
public:
    Blob()=default;
    void add(T i){
        v.push_back(i);
    }
    void print(){
        for(auto n : v){
            cout << n << endl;
        }
    }
private:
    vector<T> v;

};
int main()
{
    Blob<int> b;
    for(int i=0;i<5;++i){
        b.add(i);
    }
    b.print();
    return 0;
}

