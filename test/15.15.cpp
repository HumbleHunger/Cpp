/*************************************************************************
	> File Name: 15.15.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年11月07日 星期六 18时12分49秒
 ************************************************************************/

#include<iostream>
using namespace std;
class disc_quote :public quote{
public:
    disc_quote();
    disc_quote(const std::string& b, double p, std::size_t q, double d) :
		Quote(b, p), quantity(q), discount(d)
	{}
    virtual double net_price(size_t n) const override =0;
private:
    size_t quantity;
    double discount;
};
