/*************************************************************************
	> File Name: 15.3.h
	> Author: 
	> Mail: 
	> Created Time: 2020年11月04日 星期三 21时12分54秒
 ************************************************************************/

#ifndef _15.3_H
#define _15.3_H
using namespace std;
class Quote {
public:
    Quote()=default;
    Quote(const string &book,double sales_price):bookNo(book),price(sales_price){}
    virtual ~Quote()=default;

    string isbn() const {return bookNo;}
    virtual double net_price(size_t n) const {
        return n*price;
    }

private:
    string bookNo;
protected:
    double price=0.0;
};
class Bulk_quote : public Quote {
public:
    Bulk_quote()=default;
    Bulk_quote(const string &book,double sales_price,double sales_discount,size_t num):Quote(book,sales_price),discount(sales_discount),min_num(num){}
    virtual ~Bulk_quote()=default;

    virtual double net_price(size_t n) const {
        if(n>min_num){
            return n*discount*price;
        }
        else{
            return n*price;
        }
    }
private:
    double discount=0.0;
    size_t min_num=0;
};
class new_quote : public Quote {
public:
    new_quote()=default;
    new_quote(const string &book,double sales_price,double sales_discount,size_t num):Quote(book,sales_price),discount(sales_discount),max_num(num){}
    virtual ~new_quote()=default;

    virtual double net_price(size_t n) const {
        if(n<max_num){
            return n*discount*price;
        }
        else{
            return max_num*price*discount+(n-max_num)*price;
        }
    }
private:
    double discount=0.0;
    size_t max_num=0;
};
#endif
