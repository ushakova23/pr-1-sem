#include <iostream>
#include <vector>
#include <string>
int main()
{
    int n=0; 
    std::cin>>n;
    std::string s = " ";
    std::cin>>s;//строка s длины n
    int S=0;//количество монет
    int enum_up=0;
    int enum_right=0;
    if (s[0] == 'U') enum_up++;
    else enum_right++;
    for (int i=1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            if (enum_right == enum_up) S++;
        } 
        if (s[i] == 'U') enum_up++;
        else enum_right++;
    } 
    std::cout<<S;
    return 0;
}
