#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

int main() 
{

    float a = 0;
    float b = 1;
    double dx = 0.05;
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
            s_i = pow(a, i) * sin(i * (M_PI / 4));
			s = s + s_i;
			y = (a * sin(M_PI / 4)) / (1 - 2 * a * cos(M_PI / 4));
			i += 1;
		}

        }


        std::cout<<s<<std::endl;


    }


