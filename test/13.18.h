/*************************************************************************
	> File Name: 13.18.h
	> Author: 
	> Mail: 
	> Created Time: 2020年10月29日 星期四 20时28分48秒
 ************************************************************************/

#ifndef _13.18_H
#define _13.18_H
class Employee {
public:
    Employee():id(size),name(""){}
    Employee(const string& str):id(size),name(str){}
private:
    string name;
    int id;
    static size;
};
Employee::size=1;
#endif
