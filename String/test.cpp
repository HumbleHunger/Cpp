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
    String s1="0123456789";
    cout << s1.substr(0,5) << endl;
    cout << s1.substr(s1.begin(),s1.begin()+5) << endl;
    cout << s1 << endl;
}
