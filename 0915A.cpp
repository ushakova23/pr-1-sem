#include <iostream>
#include <algorithm>
#include <iomanip>
int main()
{
   int n;
   int k;
   std::cin>>n>>k;
   int b;
   b=100;
   for (int i=0; i<n; i++)
   {
       int a;
       std::cin>>a;
        if ((k%a == 0) && ((k%a) < b)) b = k/a;
   }
   std::cout<<b;
   
    return 0;
}
