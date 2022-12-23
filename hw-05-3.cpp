#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

int main() 
{

    float a = 0;
    float b = 1;
    double dx = 0.1;
    double eps = std::pow (10, -3);
    double y;
    double s_i = 1.0;
    int factorial =1;
    float s=0;

    for (float x = a; x <= b; x += dx) 
    {

        int i = 0;
        float count = 1;
        float s = 0;

        while (std::abs(count) >= eps) 
        {
            if (i != 0) 
            {
				for (int j = 1; j <= i; ++j) 
				{
					factorial = factorial * j;
				}
			}
			s_i = pow(2 * a, i) / factorial;
			s = s + s_i;
			y = exp(2 * a);
			i += 1;
			factorial = 1;
		}
		}

        


        std::cout<<s<<std::endl;


    }


