#include <iostream>
#include <cmath>
 
int main()
{
    int t;
    std::cin>>t;
    while (t--)
    {
        int n, m, Sx, Sy, d;
        std::cin>>n>>m>>Sx>>Sy>>d;
        if (fmin(Sx-1, m-Sy) <=d && fmin(n-Sx, Sy-1) <= d)
        {
            std::cout<<"-1";
        }
        else 
        {
            std::cout<<n+m-2;
        }
    }
 
    return 0;
}