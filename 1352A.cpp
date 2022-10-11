#include <iostream>
using namespace std;
 
int main()
{
    int t, k, s;
    int* n;
    cin>>t;
    n=new int[t];//выделяем больше места в памяти 
 
    for (int i=0; i<t; i++)//считываем n 
        cin>>n[i];
 
    for (int i=0; i<t; i++)
    {
        k=0;
        s=10;
 
        while (n[i]*10 >= s)//проверяем и считаем
        {
            if ((n[i]%s) - (n[i]%(s/10)) != 0) k++;
            s*=10;
        }
 
        cout<<k<<endl;
        s=10;
 
        while (n[i]*10 >= s)
        {
            if ((n[i]%s) - (n[i]%(s/10)) != 0) cout<<(n[i]%s) - (n[i]%(s/10)) << ' ';
            s *= 10;
        }
        cout<<endl;
    }
 
    delete[] n;
 
    return 0;
}