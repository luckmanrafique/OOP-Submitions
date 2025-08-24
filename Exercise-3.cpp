#include<iostream>
using namespace std;
class Box{
private:
    double l;
    double w;
    double h;
    double volume;
public:
    Box(double a,double b,double c){
        l=a;
        w=b;
        h=c;
        volume=l*w*h;
    }
    void vol(){
        cout<<"Volume is: "<<volume<<endl;
    }
};
int main(){
    Box b1(3.1,2.6,9.7);
    Box b2(1.1,5.6,3.80);
    b1.vol();
    b2.vol();
    return 0;
}