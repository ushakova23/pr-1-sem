#include <iostream>
#include <cmath>


int main() 
{

    float a = -1;
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
				factorial = 1;
				for (int j = 1; j <= i * 2; ++j) 
				{
					factorial = factorial * j;
				}
			}
			s_i = (std::pow(-1, i) * std::pow(a, 2 * i)) / factorial;
			y = cos(a);
			s = s + s_i;
			i += 1;
		}

        }


        std::cout<<s<<std::endl;


    }


