/*************************************************************************
	> File Name: 9.31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月19日 星期一 16时10分50秒
 ************************************************************************/

#include<iostream>
#include<list>
#include<vector>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> vi = {1,2,3,4,5,6,7,8,9};
    auto iter=vi.begin();
    auto prev=vi.before_begin();
    while(iter != vi.end()){
        if(*iter % 2){
            /*prev=vi.insert_after(prev,*iter);
            ++prev;
            ++iter;*/
            iter=vi.insert_after(iter,*iter);
            prev=iter;
            ++iter;
        }
        else{
            iter=vi.erase_after(prev);
        }
    }
    for(int i : vi){
        cout << i << " ";
    }
    cout << endl;
}
