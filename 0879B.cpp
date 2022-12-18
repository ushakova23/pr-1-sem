#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
int main() 
{
	int n;
	cin >> n;
	int k;
	cin >> k;
 
	int y = 0;
 
	vector<int> q(n,0);
 
	for (int i = 0; i < n; i++) 
	{
		cin >> q[i];
	}
 
 
	auto it = begin(q);
	while (y < k)
	{
		if (*it > *(it + 1)) 
		{
			rotate(it + 1, it + 2, q.end());
			y++;
		}
		else {
			rotate(it, it + 1, q.end());
			y = 1;
		}
	}
 
	cout << *it << endl;
	return 0;
}
