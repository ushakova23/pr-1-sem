#include <iostream>
 
int main()
{
    int n, i;
    std::cin>>n;
    int a[n];
    int c[n];
    for (i=0; i<n; i++){//считать массив 
        std::cin>>a[n];
    }
    i=0;
    int b;
    b=0;
    b=i+1;
    while (b<n){//сравнить элементы из двух массивов и удалить повторы
        if (a[n]==a[b]){
            for (i=0; i<b; i++){
                a[i]==a[i+1];
                n--;
            }
           
        }
        else b++;
    }
    for (int i=0; i<n; i++) {
        std::cout<<n<<std::endl<<a[i];
    }
    
    
    return 0;
}