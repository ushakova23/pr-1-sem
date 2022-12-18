#include <iostream>
#include <string>
#include <algorithm>
int main() 
{
    int t;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		std::cin >> n;
		int a[100];
		for (int i = 0; i < n; i++)
		{
			std::cin >> a[i];
		}
		int x = *std::max_element(a, a + n);
		for (int i = 0; i < n; i++)
		{
			x = x & a[i];
		}
		std::cout << x;
	}
	return 0;	
}