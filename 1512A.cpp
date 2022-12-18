#include <iostream>
 
using namespace std;
 
int main()
{
	int a;
	int n; 
	int x;
	std::cin>>a;
	for (a>0; a--)
	{
		std::cin>>n;
		int arr[n];
		for (; int i = 0; i < n; int i++)
		{
			std::cin>>arr[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] != arr[i + 1])
			{
				if (arr[i + 1] == arr[i + 2])
				{
					std::cout<<i + 1<<endl;
				} else 
				{
					std::cout<<i + 2<<endl;
				}
				break;
			}
		}
	}
	return 0;
}