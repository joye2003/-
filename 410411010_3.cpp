//
// Created by 周儀 on 2022/4/19.
//
//
// ID:410411010 name:周儀 class:1B
#include <iostream>
using namespace std;

class Topology1{
public:
    double getArea(double l, double b) { // 求面積
        return l * b;
    }
};
class Topology2{
public:
    double getPerimeter(double l, double b) {// 求周長
        return 2*(l + b);
    }
};
class rectangle:public Topology1,public Topology2{
private:
    double length,breadth;
public:
    rectangle() = default;
    rectangle(double l,double b):length(l),breadth(b){}
    double area(){
        return Topology1::getArea(length,breadth);
    }
    double perimeter(){
        return Topology2::getPerimeter(length,breadth);
    }
};
int main(){
    double length, breadth;
    cin >> length >> breadth;
    rectangle rt(length, breadth);
    cout << "Area : " << rt.area() << endl;
    cout << "Perimeter : " << rt.perimeter() << endl;
    return 0;
}