#include <iostream>
 
using namespace std;
 
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int i=0;
    cin>>a>>c;
    int perevod=1; 
    for (i=0; (a || c); i+=1 )
    {
        b+= (((c%3)-(a%3) + 3)%3)*perevod; //+3 если разность будет отрицательной (из остатка а вычитаем остаток с и переводим в десятичную систему)
        a/=3;
        c/=3; //убираем остатки
        perevod *=3;
    }
    cout<<b;
    
    return 0;
}
