#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
#define SIZE 255
class StrType{
private:
    char *p;
    int len;
public:
    StrType();
    ~StrType();
    void set(char *p);
    void show();
};
StrType::StrType(){
    p=(char *) malloc(SIZE);
    if(!p){
        cout<<"Allocation error"<<endl;
        exit (1);
    }
    *p='\0';
    len=0;
}
StrType::~StrType(){
    cout<<"Freeing p"<<endl;
    free(p);
}
void StrType::set(char *ptr){
    if(strlen(ptr)>= SIZE){
        cout<<"String too big"<<endl;
        return;
    }
    strcpy(p,ptr);
    len=strlen(p);
}
void StrType::show(){
    cout<<p<<" - length: "<<len<<endl;
}
int main(){
    StrType s1,s2;
    s1.set("Hello World!");
    s2.set("This is an example.");
    s1.show();
    s2.show();
    return 0;
}