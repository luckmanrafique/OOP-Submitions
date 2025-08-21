#include<iostream>
using namespace std;
class MyClass{
    public:
    int a;
};
int main(){
    MyClass ob1,ob2;
    ob1.a=27;
    ob2.a=54;
    cout<<ob1.a<<endl;
    cout<<ob2.a<<endl;
    return 0;
}