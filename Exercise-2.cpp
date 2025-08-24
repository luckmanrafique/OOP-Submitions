#include<iostream>
#include<ctime>
using namespace std;
class Stopwatch{
private:
    double begin;
    double end;
public:    
    Stopwatch();
    ~Stopwatch();
    void start();
    void stop();
    void show();
};
Stopwatch::Stopwatch(){
    begin=0.0;
    end=0.0;
}
Stopwatch::~Stopwatch(){
    cout<<"Stopwatch object being destroyed...."<<endl;
    show();
}
void Stopwatch::start(){
    begin = (double)clock()/CLOCKS_PER_SEC;
}
void Stopwatch::stop(){
    end=(double)clock()/CLOCKS_PER_SEC;
}
void Stopwatch::show(){
    cout<<"Elapsed time: "<<end-begin<<endl;
}
int main(){
    Stopwatch watch;
    watch.start();
    for(long i=0;i<320000;i++);
    watch.stop();
    watch.show();
    return 0;
}