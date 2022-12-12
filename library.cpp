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
Rdecart operator*(Rdecart lhs, const double&rhs)
{
	Rdecart& res = lhs;
	res = {lhs.x*rhs.x, lhs.y*rhs.y};
	return res;
}
Rdecart operator/=(Rdecart&lhs, const double&rhs) //оператор деления с присваиванием
{
	lhs.x /= rhs;
	lhs.y /= rhs;
	return lhs;
}
Rdecart operator/(Rdecart lhs, const double&rhs) //оператор деления
{
	Rdecart&res = lhs;
	res = {lhs.x/rhs.x, lhs.y/rhs.y};
	return res;
}

double Norm (const Rdecart&lhs)//функция нормирование вектора
{
    return (sqrt(lhs.x * lhs.x + lhs.y * lhs.y));
}

double Dot (const Rdecart&lhs, const Rdecart&rhs)//функция скалярное произведение векторов
{
    return (lhs.x * rhs.x + lhs.y * rhs.y);
}

