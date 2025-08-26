#include<iostream>
using namespace std;
class Myclass{
private:
    int i;
    int j;
public:
    Myclass(int a,int b);
    void show();
};
Myclass::Myclass(int a,int b){
    cout<<"In constructor"<<endl;
    i=a;
    j=b;
}
void Myclass::show(){
    cout<<i<<" "<<j<<endl;
}
int main(){
    int x,y;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    Myclass ob(x,y);
    ob.show();  
    return 0;
} 