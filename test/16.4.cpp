#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
template <typename Iter,typename T>
Iter my_find(Iter begin_it,Iter end_it,const T& data)
{
    Iter iter=begin_it;
    while(iter != end_it){
        if(*iter==data){
            return iter;
        }
        ++iter;
    }
    return end_it;
}
int main()
{
    vector<string> v={"ty","erg","dsf","Df","pi"};
    list<string> l={"sadas","sad","qwe","gbf","ujy"};
    cout << *(my_find(v.begin(),v.end(),"pi")) << endl;
    cout << *(my_find(l.begin(),l.end(),"gbf")) << endl;
    return 0;
}

