#include <iostream> 
class shp { 
    public: 
        void d(double base, double height) { 
        b1 = base; 
        h1 = height; 
        } 
        virtual double Area() { 
        return b1 * h1; 
        } 
        protected: 
        double b1; 
        double h1; 
    }; 

class Triangle : public shp{ 
    public: 
        double Area() override{ 
        return b1 * h1;}
        };
        int main()
        { 
        Triangle Triangle; 
        Triangle.d(5.0, 3.0); 
        std::cout << "Area of Triangle: " << 0.5*Triangle.Area() << std::endl; 
        std::cout<<"Done By VIMALAN S CSE_D ";
        std::cout<<"23CS246";
        return 0; 
} 
