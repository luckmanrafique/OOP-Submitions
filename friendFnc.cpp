#include<iostream>
using namespace std;
class Truck;
class Car{
    private:
        string model;
        double speed;
    public:
        Car(string m,double s){
            model=m;
            speed=s;
        }
    friend int speedGreater(Car c, Truck t);
};
class Truck{
        string model;
        double speed;
    public:
        Truck(string m,double s){
            model=m;
            speed=s;
        }
    friend int speedGreater(Car c, Truck t);
};
int speedGreater(Car c,Truck t){
    return c.speed-t.speed;
}
int main(){
    Car c("Toyota",60);
    Truck t("Mitsubishi",70);
    cout<<"\nComparing Car and Truck"<<endl;
    int result=speedGreater(c,t);
    if(result<0) cout<<"Truck is Faster"<<endl;
    else if(result>0) cout<<"Car is Faster"<<endl;
    else cout<<"Both are in same speed"<<endl;
    return 0;
}