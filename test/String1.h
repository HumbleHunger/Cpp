// Created by bokket on 2020/12/3.
//

#ifndef STRING_STRING_H
#define STRING_STRING_H
#include <iostream>

#define INT_MAX 2147483647
#define INT_MIN -2147483678

using namespace std;
class String {
    friend ostream &operator<<(ostream &os, String &str);

    friend istream &operator>>(istream &is, String &str);

public:
    String();

    String(const char *s = "");

    String(const String &str);

    String(size_t n, const char c);

    ~String();

public:
    void push_back(const char *s);//
    void push_back(const char c);

    size_t size() const;

    void set_length(size_t len);

    size_t length();

    size_t find(const char c, int pos) const;

    size_t find(const char *s, int pos);

    size_t find(const String &str, int pos);


    String &insert(size_t pos1, const String &str);

    String &insert(size_t pos1, const String &str, size_t pos2, size_t n);

    String &insert(size_t pos1, const char *s, size_t n);

    String &insert(size_t pos1, const char *s);

    String &insert(size_t pos1, size_t n, char c);

    String &insert(const int n,const char c);

    String &remove(const int n);

    String &remove(const int start, const int nChars);

    char *toString() const;

    const char *c_str() const;

    char &at(size_t n);

    String &replace(size_t begin, size_t end, const char c);

    String &replace(size_t begin,size_t end,const char* s);

    String &replace(size_t begin,size_t end,const String & str);

    int replaceAll(char ch, char c);


    void get_next(int *nextval);

    String &append(const String &str);

    String &append(const char *s);

    String &append(size_t pos, const char c);

    String &append(const String &str, size_t pos, size_t len);


    String &assign(const String &, size_t, size_t);

    String &erase(size_t pos, size_t len);

    String &swap(const char *s);

    String &swap(const String &str);

    String substr(size_t begin, size_t end);

    int strlen(const char *s);
    int atoi(char* ptr);

    char *memcpy(char *des, const char *src, size_t n);

    size_t compare(const String &str) const;

    size_t compare(const char *s) const;

    size_t compare(const String &lhs, const String &rhs) const;

    int copy(char *s, size_t n, size_t pos = 0) const;

    bool equals(const String &other);

    bool equals(const char *other);

    bool empty();


public:
    String &operator=(const String &str);

    String &operator=(String str);

    String &operator=(const char *s);


    String &operator+(const String &str) const;//
    String &operator+(char c);

    String &operator+(char *s);

    String &operator+=(const String &str);//
    String &operator+=(const char *s);

    String &operator+=(char c);

    String &operator!=(const String &, const String &);


    bool operator==(const String &str) const;

    bool operator==(const char *s) const;

    bool operator!=(const String &str);

    bool operator!=(const char *s);

    bool operator>(const String &str);

    bool operator>(const char *s);

    bool operator<(const String &str);

    bool operator<(const char *s);

    const char &operator[](size_t n) const;

    char &operator[](size_t n);//



private:
    void CheckCapacity(size_t pos);

    char *_str;
    size_t len_;
    size_t capacity_;




public:
    class iterator
    {
        friend ostream & operator<<(ostream & out,iterator& obj)
        {
            out<<obj.it;
            return out;
        }
    public:
        iterator();

        iterator(const iterator &rhs);

        iterator(const String *sp);

        iterator(const String *sp, int n);

        ~iterator();

        char operator*();

        iterator operator++(int);

        iterator & operator++();

        iterator operator--(int);

        iterator & operator--();

        iterator & operator=(const iterator &obj);

        const char* operator->() const;
        const int operator->() const;

        bool operator==(const iterator &rhs);

        bool operator!=(const iterator &rhs);

        bool operator<(const iterator &rhs);

        bool operator<=(const iterator &rhs);

        bool operator>(const iterator &rhs);

        bool operator>=(const iterator &rhs);

        iterator operator+(const int k);

        iterator operator-(const int k);

    private:
        iterator begin() const;

        iterator end() const;

        const String *it;
        int index;
    };

};

long long stroi(const char* str,bool minus);
#endif //STRING_STRING_H
