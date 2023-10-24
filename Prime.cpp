#include <iostream> 
int main() { 
 int n; 
 bool prime = true; 
 std::cout << "Enter a Integer: "; 
 std::cin >> n; 
 if(n>0){
    if (n == 0 || n == 1) { 
    prime = false; 
    }
 for (int i = 2; i <= n/2; ++i) { 
    if (n % i == 0) { 
    prime = false; 
    break; 
    } 
 }
if(prime){
   std::cout<<n<<" Is a Prime Number!";
}
else{
     std::cout<<n<<" Is not a Prime Number!";
}}
else{
    std::cout<<"Please Enter a Positive Integer!!";
}
std::cout<<"\n Done By VIMALAN S CSE_D ";
std::cout<<"23CS246";}
