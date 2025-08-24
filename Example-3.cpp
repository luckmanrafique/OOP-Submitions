#include<iostream>
#include<ctime>
using namespace std;
class Timer{
private:
    clock_t start;
public:
    Timer();
    ~Timer();
};
Timer::Timer(){
    start= -clock();
}
Timer::~Timer(){
    clock_t end;
    end=clock();
    cout<<"Elapsed time: "<<(end-start)/CLOCKS_PER_SEC<<endl;
}
int main(){
    Timer ob;
    char c;
    cout<<"Press a key followed by Enter: ";
    cin>>c;
    return 0;
}