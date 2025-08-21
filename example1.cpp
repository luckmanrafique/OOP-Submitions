#include<iostream>
using namespace std;
class MyClass{
    private:
    int A;
    public:
    void setA(int num);
    int getA();
};
void MyClass::setA(int num){
    A=num;
}
int MyClass::getA(){
    return A;
}
int main(){
    MyClass ob1,ob2;
    ob1.setA(54);
    ob2.setA(27);
    cout<<ob1.getA()<<endl;
    cout<<ob2.getA()<<endl;
}