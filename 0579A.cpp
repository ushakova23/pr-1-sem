#include <iostream>


int main()
{
    int x;
    std::cin>>x;
    int bacteria=0;
    while(x>0)
    {
        if(x%2==1) bacteria++;
        x/=2;
    }
    std::cout<<bacteria;

    return 0;
}
