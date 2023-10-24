#include <iostream>
int main()//23CS246
{
    int rows;
    std::string op;
    std::cout<<"Enter the Number of Rows: ";
    std::cin>>rows;
    std::cout<<"1--> Half-Pyramid\n2--> Reverse Half-Pyramid";
    std::cout<<"\nEnter the Operation: ";
    std::cin>>op;
    if(rows!=0 && op=="1"){
    for(int i=1;i<=rows;++i){
        for(int j=1;j<i;++j){
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }}
    else if(rows!=0 && op=="2"){
        for(int i=1;i<=rows;i++){
            for(int j=i;j<=rows;j++){
                std::cout<<"* ";
        }
        std::cout<<"\n";
    }    
    }
    else{
        std::cout<<"Please Enter a Non Zero Integer ";
    }
    std::cout<<"Done By VIMALAN S CSE_D ";
    std::cout<<"23CS246";
}
