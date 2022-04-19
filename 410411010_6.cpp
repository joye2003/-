//
// Created by 周儀 on 2022/4/19.
// ID:410411010 name:周儀 class:1B
#include <iostream>
using namespace std;
struct Record { // 除要求完成項目以外不得修改, 否則零分計算
    string name;
    int grade;
};
class Students {
private:
    Record *arr;
    int capacity;
public:
    Students(int size); // 請完成此建構子
    Students(const Students &); //請完成複製建構子
    ~Students(); // 請完成解構子
    friend void printBestStudent(Students); // 印出成績最高的學生姓名與成績
};
Students::Students(int size) { // 建構子提示:
// 接受輸入得到學生人數 capacity
// 輸入每一個學生 (型別為 Record) 的姓名 name 與成績 grade
}
// 請完成 printBestStudent() 函式與 Students 複製建構子
int main() { // 不得修改
    int num = 3;
    Students myStudents(num);
    Students allStudents(myStudents);
    printBestStudent(allStudents);
    return 0;
}