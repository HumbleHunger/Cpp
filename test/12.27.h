/*************************************************************************
	> File Name: 12.27.h
	> Author: 
	> Mail: 
	> Created Time: 2020年10月28日 星期三 17时31分56秒
 ************************************************************************/

#ifndef _12.27_H
#define _12.27_H
#include<vector>
#include<string>
#include<fstream>
#include<memory>

class TextQuery{
public:
    TextQuery(ifstream &file);
    QueryResult query(const string &word);
private:
    shared_ptr<vector<int>> text;
    map<string,shared_ptr<set<int>>> word_map;
    
};
TextQuery::TextQuery(ifstream &file)
{
    string word;
    text=make_shared<vector<string>>;
    while(file >> word){
        if(word )
    }
}
class QueryResult{
public:
    
private:

};
#endif
