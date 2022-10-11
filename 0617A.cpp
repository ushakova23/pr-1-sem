
#include <iostream>
 
int main() {
    int s = 0;
    std::cin >> s;
    int n=0; 
    n = s / 5;
    if (n % 5 != 0) {
        n += 1;
    }
    std::cout << n;
    return 0;
}
