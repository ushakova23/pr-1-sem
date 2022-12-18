#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n = 0;
    std::cin >> n;
    int ans = 0;
    std::vector<int> points(n);
    int tom = 0;
    for (int j = 0; j < n; j++)
    {
        int at = 0;
        for (int i = 0; i < 4; i++)
        {
            std::cin >> at;
            points[j] += at;
        }
    }
    tom = points[0];
    sort (points.begin(), points.end(),
          std::greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (points[i] == tom)
        {
            ans = i + 1;
            break;
        }
    } std::cout <<ans;
    return 0;
 }
    