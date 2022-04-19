//ID:410411010 name:周儀 class:1B
#include <iostream>
using namespace std;
class Sample {
    int *array;
public:
    Sample() {
        cout << "I am a sample."<<endl;
    }
    ~Sample() {
        cout << "The sample is deleted."<<endl;
    }
};
int main() { // main() 不得修改, 否則零分計算
    Sample *s1 = new Sample[1];
    delete s1;
}
