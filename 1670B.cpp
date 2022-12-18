#include <iostream>
#include <string> 
int main()
{
    int t; 
    std::cin>>t;
    while(t--)
    {
        int n; 
        std::cin>>n;
        std::string s; 
        std::cin>>s;
        int k;
        std::cin>>k;
        int c[26];
        char b;
        for(int i=0; i<k; i++)
        {
            std::cin >> b;
            c[b-'a'] = 1;
        }
        int m = 0; 
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(c[s[i]-'a'])
            {
                m = std::max(m, ans);
                ans = 0;
            }
            ans++;
        }
        std::cout << m << "\n";
    }
}