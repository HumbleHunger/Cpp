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
*/
    string s={'a','b','v','s','e','d'};
    String s1("aaaaaaaaaaaaa");
    s1.replace('a','b');
    cout << s1 << endl;
    s1.clear();
    cout << s1 <<endl;
}
