#include <iostream>
using namespace std;

class Myclass {
private:
    int a;
public:
    Myclass(int x);
    int get();
};

Myclass::Myclass(int x) {
    a = x;
}

int Myclass::get() {
    return a;
}

int main() {
    Myclass ob(120);
    Myclass* p;
    p = &ob;
    cout << "Value using object: " << ob.get()<<endl;
    cout << "Value using pointer: " << p->get()<<endl;
    return 0;
}
