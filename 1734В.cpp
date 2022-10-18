#include <iostream>
 
int main()
{
    int t=0;
    std::cin>>t;
    while (t--)
    {
        int n=0;
        std::cin>>n;
        for (int i=1; i <= n; i++)
        {
            for (int j=1; j <= i; j++)
            {
                std::cout<<(j == 1 || j == i)<<' ';//выводим рёбра пирамиды 
            }
            std::cout<<std::endl;
        }
    }
    return 0;
}
