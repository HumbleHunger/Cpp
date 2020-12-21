#include <iostream>
#include "String.h"
#include <string>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
int main()
{
    /*
    String s1("abc");
    cout << "jlk"+s1 << endl;
    String s2(s1);
    cout << s2 << endl;
    String s3=s1;
    cout << s3<< endl;
    String s4="abc";
    String s5(3,'a');
    String s6(s1+"def");
    String s7;
    ifstream in("1.c");
    getline(in,s7);
    for(auto a : s1){
        cout << a <<endl;
    }
    cout << s2 << endl;
    cout << s2.size() << endl;
    cout << s3.empty() << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
*/
    string s={'a','b','v','s','e','d'};
    String s1("aaaaaaaaaaaaa");
    s1.replace('a','b');
    cout << s1 << endl;
    s1.clear();
    cout << s1 <<endl;
}
