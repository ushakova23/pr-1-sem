#include <iostream>

 
int main()
{
    int t; 
    std::cin >> t;
    while (t--)
    {
        int n;
        int m; 
        std::cin>>n;
        std::cin>>m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int i1 = i % 4, j1 = j % 4;
                std::cout << (i1 == j1 or i1 + j1 == 3) << " ";
            }
            std::cout <<std::endl;
        }
    }
}