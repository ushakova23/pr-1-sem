#include <iostream>
#include <algorithm>
#include <vector>
 
int main() 
{
    int n=0;
    int A=0; 
    int B=0;
    int sum=0;
    int count=0;
    std::vector<int> array;
    std::cin >> n;
    std::cin>> A;
    std::cin>> B;
    for (int i = 0; i < n; i += 1) 
    {
        int x=0;
        std::cin >> x;
        array.push_back(x);
        sum +=x;
    }
    std::sort(array.begin() + 1, array.end());
    while (((array[0] * A) / sum) < B) {
        sum -= array[n - 1];
        n -= 1;
        count += 1;
    }
    std::cout << count;
    return 0;
}