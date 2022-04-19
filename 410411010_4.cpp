//
// Created by 周儀 on 2022/4/19.
// ID:410411010 name:周儀 class:1B
#include <iostream>
using namespace std;
class Vehicle {
private:
    double vehiclePrice;
public:
    /* constructors & destructors */
    double get_v_price() {

    }
};
//////////////////////////////////////////////
class FourWheeler : public Vehicle {
private:
    double wheelsPrice;
public:
    /* constructors & destructors */
    double get_w_price() {

    }
};
//////////////////////////////////////////////
class Car : public FourWheeler {
private:
    double carPrice;
public:
    Car() = default;
    double totalCost();
};
/////////////////////////////////////////////
int main() {// main() 不得修改, 否則零分計算
    double vPrice, wPrice, cPrice;
    cin >> vPrice >> wPrice >> cPrice;
    Car myCar(vPrice, wPrice, cPrice);
    cout << myCar.totalCost() << endl;
    return 0;
}