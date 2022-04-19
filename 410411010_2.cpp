//
// Created by 周儀 on 2022/4/19.
//
#include <iostream>
using namespace std;
class sales{
protected:
    double price;
    int count;
public:
    double revenue(){
        return price*count;
    }
    sales() = default;
    sales(double p,int n):price(p), count(n){};
    ~sales() = default;
};
class discount_sales:public sales{
private:
    double discount;
public:
    discount_sales(double p,int n,double d):sales {p, n}, discount {d} {};
    double revenue(){
        return price*count*(1-discount);
    }
};
int main () { // main() 不得修改, 否則零分計算
    int n;
    double price, dc;
    cin >> n >> price >> dc;
    sales s1(price, n);
    discount_sales s2(price, n, 0.4);
    cout << s1.revenue() << endl;
    cout << s2.revenue() << endl;
    return 0;
}