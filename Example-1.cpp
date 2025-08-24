#include<iostream>
using namespace std;
#define SIZE 10
class Stack{
private:
    char stck[SIZE];
    int tos;
public:
    Stack();
    void push(char c);
    char pop();
};
Stack::Stack(){
    cout<<"Constructing a stack"<<endl;
    tos=0;
}
void Stack::push(char c){
    if (tos==SIZE)
    {
        cout<<"Stack is full"<<endl;
        return ;
    }
    stck[tos]=c;
    tos++;
}
char Stack::pop(){
    if(tos==0){
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}
int main(){
    Stack s1,s2;
    s1.push('A');
    s2.push('X');
    s1.push('B');
    s2.push('Y');
    s1.push('C');
    s2.push('Z');
    for(int i=0;i<3;i++){
        cout<<"Pop s1: "<<s1.pop()<<endl;
    }
    cout<<"----------------------"<<endl;
    for(int i=0;i<3;i++){
        cout<<"Pop s2: "<<s2.pop()<<endl;
    }
    return 0;
}