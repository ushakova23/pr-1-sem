#include <iostream>
#include <string>
 
int main()
{
	int n;
	int a;
	std::cin >> n;
	std::string s;
	for (int i = 0; i < n; i++) 
	{
		std::cin >> s;
		if (s.size() > 10)
		{
			a = s.size() - 2;
			std::cout<<s[0]<<a << s[s.size() - 1] << std::endl;
		}
		else std::cout << s <<std::endl;
	}
}