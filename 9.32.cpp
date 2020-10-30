/*************************************************************************
	> File Name: 9.32.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月19日 星期一 16时57分50秒
 ************************************************************************/
#include<iostream>
#include<list>
#include<vector>
#include<forward_list>
using namespace std;
int main()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9};
    auto iter=vi.begin();
    while(iter != vi.end()){
        if(*iter % 2){
            iter=vi.insert(iter,*iter++);
            ++iter;
        }
        else{
            iter=vi.erase(iter);
        }
    }
    for(int i : vi){
        cout << i << " ";
    }
    cout << endl;
}
