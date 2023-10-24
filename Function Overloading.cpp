#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
int add(double a,double b){
    return a+b;
}
int main()
{
    cout<<add(2,3)<<endl;
    cout<<add(2,3,5)<<endl;
    cout<<add(1.5,3.1)<<endl;
    std::cout<<"Done By VIMALAN S CSE_D ";
    std::cout<<"23CS246";
    return 0;
}
