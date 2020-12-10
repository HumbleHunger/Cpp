#include <iostream>
#include "String.h"
#include <string>
#include <fstream>
int main()
{
    String s1("abc");
    String s2(s1);
    String s3=s1;
    String s4="abc";
    String s5(3,'a');
    String s6(s1+"def");
    String s7;
    ifstream in("1.c");
    getline(in,s7);
    for(auto a : s1){
        cout << a <<endl;
    }
    cout << "jlk"+s1 << endl;
    cout << s2.size() << endl;
    cout << s3.empty() << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
}
