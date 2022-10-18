#include <iostream>
#include <string>
 
int main()
{
    int t=0;
    std::cin>>t;
    while (t--)
    {
        std::string s = "";
        std::cin>>s;
        long l=0;
        l = size(s);//размер строки 
        int k=1;
        bool f = false;//проверить ложь или правда
        for (int i=0; i < l; ++i)
        {
            if (s[i] == s[i + 1]) k += 1;
            
            else
            {
                if (k > 1)
                {
                    f = true;
                    k = 1;
                }
                else
                {
                    f = false;
                    k = 1;
                    break;
                }
            }
        } if (f == true)
        {
            std::cout << "YES" << std::endl;
        } else{
            std::cout << "NO" << std::endl;
        }
        
    }
    
 return 0;   
}