#include <iostream>
#include <cmath>

struct Rdecart //заводим новый пользовательский тип данных
{
    double x=0.0; //координаты
    double y=0.0;
};
struct Rpolar //ещё один тип
{
    double r=0.0; //радиус-вектор и угол
    double phi=0.0;
};
std::ostream&operator<<(  //вывод чисел в поток

    std::ostream&ostrm,
    const Rdecart&pixel) {
        return ostrm<<'('<<pixel.r<<','<<pixel.phi<<')';
}
std::ostream&operator<<(
    std::ostream&ostrm,
    const Rdecart&pixel) {
	return ostrm<<'('<<pixel.x<<','<<pixel.y<<')';
}


Rdecart ToDec(Rpolar vector) //связь между декартовой и полярной системой координат
{
	double x = std::cos(vector.phi) * vector.r;
	double y = std::sin(vector.phi) * vector.r;
	Rdecart ro_vector{ x, y };
	return ro_vector;
}
Rpolar ToPol(Rdecart vector) //из полярной в декартову ск
{
	double r = std::sqrt(vector.x * vector.x + vector.y * vector.y);
	double phi = std::asin(vector.y / r);
	Rpolar ro_vector{ r, phi };
	return ro_vector;
}
//операторы для декартовой ск
Rdecart operator+=(Rdecart&lhs, const Rdecart&rhs) //оператор сложения с присваиванием
{
	lhs.x += rhs.x;
	lhs.y += rhs.y;
	return lhs;
}
Rdecart operator+(const Rdecard&lhs, const Rdecart&rhs)//оператор сложения
{
    Rdecart res = lhs;
    res = {lhs.x+rhs.x, lhs.y+rhs.y};
    return res;
}
Rdecart operator-=(Rdecart&lhs, const Rdecart&rhs) //оператор вычитания с присваиванием
{
    lhs.x -= rhs.x;
	lhs.y -= rhs.y;
	return lhs;
}
Rdecart operator-(const Rdecard&lhs, const Rdecart&rhs)//оператор вычитания
{
    Rdecart res = lhs;
    res = {lhs.x-rhs.x, lhs.y-rhs.y};
    return res;
}
Rdecart operator*=(Rdecart&lhs, const double&rhs) //оператор умножения с присваиванием
{
	lhs.x *= rhs;
	lhs.y *= rhs;
	return lhs;
}
Rdecart operator*(Rdecart lhs, const double&rhs)//оператор умножения (умножение вектора на число) 
{
	Rdecart res = lhs;
	res = {lhs.x*rhs.x, lhs.y*rhs.y};
	return res;
}
Rdecart operator/=(Rdecart&lhs, const double&rhs) //оператор деления с присваиванием
{
	lhs.x /= rhs;
	lhs.y /= rhs;
	return lhs;
}
Rdecart operator/(Rdecart lhs, const double&rhs) //оператор деления (деление вектора на число)
{
	Rdecart res = lhs;
	res = {lhs.x/rhs.x, lhs.y/rhs.y};
	return res;
}


double Norm (const Rdecart&lhs)//функция нормирование вектора
{
    Rderact res = lhs;
    res = {(sqrt(lhs.x * lhs.x + lhs.y * lhs.y))};
    return res;
}

double Dot (const Rdecart&lhs, const Rdecart&rhs)//функция скалярное произведение векторов
{
    Rdecart res = lhs;
    res = {(lhs.x * rhs.x + lhs.y * rhs.y)};
    return res;
}



int main()//если растояние между мышкой и кошкой больше радиуса поражения кошки, то мышка убежит, 
//если растояние между мышкой и кошкой меньше радиуса поражения кошки, то мышку скушают, 

{
    Rdecart r_mouse = { , };//входные данные 
	Rdecart r_cat = { , };
	double r_defeat_cat = ;
	Rdecart v_m = { , };
	Rdecart v_c = { , };
	double norm_v_cat = norm(v_cat);
	double norm_v_mouse = norm (v_mouse);
	double distance2 = norm(r_mouse - r_cat);
	double distance1 = norm(r_mouse + v_mouse);
	for (int i=1; i!=0;  i++) 
        {
            if (norm(r_cat) >= norm(r_mouse + v_mouse)) //мышку не скушали 
            {
                std::cout << "мышка в норке";
                break;
            }
		    if (norm(r_mouse - r_cat) <= r_defeat_cat)//мышку скушали  
            {
                std::cout << "мышку жалко";
                break;
            }
        }
    return 0;
}
