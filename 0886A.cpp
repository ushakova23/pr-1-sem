#include<iostream>
int main()
{
  int a[6];
    for(int i=0;i<6;i++)
    {
        std::cin>>a[i];
    }
    if((a[0]+a[1]+a[2])==(a[3]+a[4]+a[5]))
    {
            std::cout<<"YES"<<std::endl;
    }
   else if((a[0]+a[1]+a[3])==(a[2]+a[4]+a[5]))
   {
            std::cout<<"YES"<<std::endl;
    }
   else if((a[0]+a[1]+a[4])==(a[3]+a[2]+a[5]))
   {
            std::cout<<"YES"<<std::endl;
    }
   else if((a[0]+a[1]+a[5])==(a[3]+a[4]+a[2]))
   {
            std::cout<<"YES"<<std::endl;
    }
   else if((a[0]+a[3]+a[2])==(a[1]+a[4]+a[5]))
   {
            std::cout<<"YES"<<std::endl;
    }
   else if((a[0]+a[4]+a[2])==(a[1]+a[3]+a[5]))
   {
            std::cout<<"YES"<<std::endl;
    }
    else if((a[0]+a[5]+a[2])==(a[3]+a[4]+a[1]))
    {
            std::cout<<"YES"<<std::endl;
    }
    else if((a[3]+a[1]+a[2])==(a[0]+a[4]+a[5]))
    {
            std::cout<<"YES"<<std::endl;
    }
    else if((a[4]+a[1]+a[2])==(a[3]+a[0]+a[5]))
    {
            std::cout<<"YES"<<std::endl;
    }
    else if((a[5]+a[1]+a[2])==(a[3]+a[4]+a[0]))
    {
            std::cout<<"YES"<<std::endl;
    }
    else
    {
                std::cout<<"NO"<<std::endl;
    }
    return 0;
}