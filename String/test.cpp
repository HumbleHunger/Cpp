#include <iostream>
#include "String.h"
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
int main()
{
    /*string s={'a','b','v','s','e','d'};
    String s1("0123456789");
    String s3=s1.substr(3,7);
    cout << s1.find('5') << endl;
    s1.replace('a','b');
    cout << s1 <<endl;
    String s2="adsfsdf";
    cout << s2 << endl;
    s1.swap(s2);
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    */
    string s1="1234";
    string s2="133";
    String S1="1234";
    String S2="133";
    cout << s1.compare(s2) << endl;
    cout << S1.compare(S2) << endl;

}
