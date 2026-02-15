#include<iostream>
#include<cmath>
void mean() {
double a[100];
int n = 0;
while(n<100) {std::cout<<"Enter Number:";if(!(std::cin>>a[n])) {std::cout<<"Done.\n";break;}else if (n== 'q') {break;}n++;}if (n == 0) return;double mean = 0;for(int i=0;i<n;i++) mean +=a[i];std::cout<<"mean:"<< mean/n <<std::endl;}
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
        case 'T' :
        mean();
        break;
        default:
        std::cout<<"Invalid.";
        break;
    }
}
//the test section is purely for testing purposes of different arithemetic operations that are to be implemented in this calculator
