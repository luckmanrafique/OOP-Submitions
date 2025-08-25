#include<iostream>
using namespace std;
class Samp{
    private:
        int i;
    public:
    Samp(int n){
        i=n;
    }
    void set_i(int n){
        i=n;
    }
    int get_i(){
        return i;
    }
};
void square(Samp *o){
    o->set_i(o->get_i() * o->get_i());
    cout<<"Copy of a has i value of "<<o->get_i()<<endl;
}
int main(){
    Samp a(10);
    square(&a);
    cout<<"Now, a in main() has been changed: ";
    cout<<a.get_i();
    return 0;
}