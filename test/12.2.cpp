/*************************************************************************
	> File Name: 12.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月25日 星期日 22时34分34秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<memory>
using namespace std;
class strblob {
public:
    typedef vector<string>::size_type size_type;
    strblob():data(make_shared<vector<string>>()){}
    strblob(initializer_list<string> li):data(make_shared<vector<string>>(li)){}
    
    string& front(){return data->front();}
    string& back(){return data->back();}
    const string& cfront(){return data->front();}
    const string& cback(){return data->back();}
    
    bool empty() const {return data->empty();}
    void push_back(const string& s){data->push_back(s);}
    //void pop_back();
private:
    shared_ptr<vector<string>> data;
    //void check(size_type i,const string &msg) const;
};
int main()
{
    
}
