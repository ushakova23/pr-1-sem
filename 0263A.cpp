#include <iostream>
int main() 
{
    int a[5][5];
    int x=0;
    for (int i = 0; i < 5 ;i++)
        for(int j = 0 ; j < 5 ; j++){
            std::cin>>a[i][j];
            if (a[i][j]==1)
                x+=abs(i-2)+abs(j-2);
        }
    std::cout<<x;
 
 
    return 0;
}