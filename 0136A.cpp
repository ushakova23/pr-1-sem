#include <iostream>
#include <vector>

int main()
{
    int n=0;
    int i;
    std::cin>>n;//считать n 
    int t=0; //текущий элемент в массиве
    std::vector<int> a(n);
    for (i=0; i < n; ++i)
    {
        std::cin>>t;
        a[t - 1] = i + 1;//распределение подарков
    }
    for (i=0; i<n; i++)
    {
        std::cout<<a[i]<<" ";
    }
    return 0;
}
