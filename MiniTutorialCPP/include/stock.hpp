//
//  stock.hpp
//  MiniTutorialCPP
//
//  Created by Shihao Xu on 02.11.17.
//

#include <string>

#ifndef stock_h
#define stock_h

class Stock {
private:
    std::string company;
    long share;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};  // note semicolon at the end of a class definition

#endif /* stock_h */
