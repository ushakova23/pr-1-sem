#include <iostream>
#include <numbers>
#include <cmath> 
#include <iomanip>
int main()
{
    int n(0); 
    int r(0);
    long double R(0);
    std::cin>>n>>r;
    R=(r*sin(std::numbers::pi/n))/(1-sin(std::numbers::pi/n));
    std::cout<<std::setprecision(10)<<R;
    return 0;
}