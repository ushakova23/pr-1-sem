#include <iostream>
 
int main()
{
   int t;
   std::cin>>t;
   int n, k, r, c;
   while (t--)
   {
     std::cin>>n>>k>>r>>c;
     r--, c--;
   for (int i(0); i<n; i++)
   {
       for (int b(0); b<n; b++)
       {
           if ((i+b)%k == (r+c)%k) 
           {
               std::cout<<"X";
           }
           else std::cout<<".";
            
       }
       std::cout<<std::endl;
   }
 
   }
    return 0;
}