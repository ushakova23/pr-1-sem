#include <iostream>
#include <cmath>
int main()
{
    int a=0;//количество всех точек
    int b=0;//количество закрашенных точек 
    while (1 == 1) 
    {
        float x;
        float y;
        std::cin>>x;
        std::cin>>y;
        if ((x == 5) && (y == 5)) 
        {
            break;
        }
        a += 1;
        if (((x*x + y*y) <= 4) and (y >= 2 - x*x)) 
        {
            a += 1;
        }
    }
    
    std::cout<<b/a;
}
