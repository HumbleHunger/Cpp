#include <iostream>
#include "String.h"
int main()
{
    String s("abc");
    String a(s);
    String d;
    String c(s+a);
    d=s;
    cout << s << endl;
    cout << a << endl;
    cout << d << endl;
    cout << c << endl;
    s[0]='b';
    cout << s[0] << endl;
    if(s>c)
        cout << ">" << endl;
    if(s<c)
        cout << "<" << endl;
    if(s==c)
        cout << "=" << endl;
}
