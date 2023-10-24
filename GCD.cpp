#include <iostream> 
using namespace std; 
int main() { 
int num1, num2, gcd; 
int res1,res2;
cout << "Enter Two Numbers(sep with space): "; 
cin >> num1 >> num2; 
res1=num1;
res2=num2;
if ( num2 > num1) { 
    swap(num1,num2);
    } 
 
 for (int i = 1; i <= num2; ++i) { 
    if (num1 % i == 0 && num2 % i ==0) { 
    gcd = i; } 
 } 
 cout <<"The GCD/HCF Of "<<res1<<" And "<<res2<<" is "<< gcd<<std::endl; 
 std::cout<<"Done By VIMALAN S CSE_D ";
 std::cout<<"23CS246";

 return 0; }
