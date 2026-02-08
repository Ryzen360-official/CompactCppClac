#include<iostream>
#include<cmath>
int main() {
    double IntegerI; double IntegerII;
    char calcoperator;
    std::cout<<"Enter First Number:"; std::cin>>IntegerI;
    std::cout<<"Enter Operator:"; std::cin>>calcoperator;
    switch(calcoperator) {
        case '+' :
        std::cout<<"Enter Second Number:"; std::cin>>IntegerII; std::cout<<"Result: "<<IntegerI+IntegerII;
        break;
        case '-' :
        std::cout<<"Enter Second Number:"; std::cin>>IntegerII; std::cout<<"Result: "<<IntegerI-IntegerII;
        break;
        case 'x' :
        std::cout<<"Enter Second Number:"; std::cin>>IntegerII; std::cout<<"Result: "<<IntegerI*IntegerII;
        break;
        case '/' :
        std::cout<<"Enter Second Number:"; std::cin>>IntegerII; std::cout<<"Result: "<<IntegerI/IntegerII;
        break;
        case '|' :
        std::cout<<"Result: "<<fabs(IntegerI);
        break;
        case '%' :
        std::cout<<"Enter Second Number:"; std::cin>>IntegerII; std::cout<<"Result: "<<fmod(IntegerI,IntegerII);
        break;
        case '^' :
        std::cout<<"Enter Second Number:"; std::cin>>IntegerII; std::cout<<"Result: "<<pow(IntegerI,IntegerII);
        break;
        default:
        std::cout<<"Invalid.";
        break;
    }
}