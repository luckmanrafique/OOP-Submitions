#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class Strtype{
private:
    char *p;
    int len;
public:
    Strtype(const char *ptr);
    ~Strtype();
    void show();
};
Strtype::Strtype(const char *ptr){
    len=strlen(ptr);
    p=(char *)malloc(len+1);
    if(!p){
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    strcpy(p,ptr);
}
Strtype::~Strtype(){
    cout<<"Freeing p"<<endl;
    free(p);
}
void Strtype::show(){
    cout<<p<<" - lenght: "<<len<<endl;
}
int main(){
      Strtype s1("This is a test."), s2("I like C++.");
    s1 . show () ;
    s2 . show () ;
return 0;
}