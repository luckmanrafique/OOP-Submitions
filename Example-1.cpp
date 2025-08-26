#include<iostream>
using namespace std;
class Myclass{
private:
    int a;
    int b;
public:
    Myclass(int x,int y){
        cout<<"In constructor"<<endl;
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    Myclass ob(4,7);
    ob.show();
    return 0;
}