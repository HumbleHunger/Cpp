#pragma once

class String
{
    public:
    String() {}
    String(const String & s) {}
    String(const char * s):str(new char(s
                                       )) {}
    String(int n,char c) {}
    ~String() {}
    
    private:
    char *str;
    int str_size;
};

