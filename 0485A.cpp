#include <iostream>
 
int main()
{
    long long a;
    int m;
    int k = 0;
    std::cin >> a >> m;
    if (a % m == 0)
    {
        std::cout << "Yes";
        return 0;
    }
    else{
        while (k <= m) 
        {
            a += a % m;
            if (k == m && a % m != 0) 
            {
                std::cout << "No";
                return 0;
            } else if (a % m == 0) 
            {
                std::cout << "Yes";
                return 0;
            }
            k += 1;
        }
    }
    return 0;
}