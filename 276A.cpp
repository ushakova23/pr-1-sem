#include <iostream>
#include <limits.h>
int main()
{
    int n, k, f, t;
    int i = INT_MIN;
    std::cin>>n>>k;
    while (n--){
        std::cin>>f>>t;
        if (k<t){
            f -= t - k;
            i = std::max (i, t);
            std::cout<<i;
        }    
        
    }
 
    return 0;
}