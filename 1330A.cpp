#include <iostream>
 
int main()
{
    int t, n, x, i, v;
    std::cin>>t;
    while(t--)
    {
      std::cin>>n>>x;
      bool a[305] = {0};
      for (i=0; i<n; i++)
      {
          int b;
          std::cin>>b;
          a[b] = 1;
      }
      for (v=1; x>0 || a[v]; v++)
      {
        if (a[v] == 0) x--;
      }
      std::cout<<v-1;
    }
    return 0;
}