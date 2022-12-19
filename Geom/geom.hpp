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
std::ostream& operator<<(std::ostream& out, const Rpolar& pixel);

Rdecart ToDec(Rpolar vector);

Rpolar ToPol(Rdecart vector);

std::ostream& operator<<(std::ostream& out, const Rdecart& pixel);

Rdecart operator+=(Rdecart& lhs, const Rdecart& rhs);

Rdecart operator+(const Rdecart& lhs, const Rdecart& rhs);

Rdecart operator-=(Rdecart& lhs, const Rdecart& rhs);

Rdecart operator-(const Rdecart& lhs, const Rdecart& rhs);

Rdecart operator*=(Rdecart& lhs, const double& rhs);

Rdecart operator*(Rdecart lhs, const double& rhs);

Rdecart operator/=(Rdecart& lhs, const double& rhs);

Rdecart operator/(Rdecart lhs, const double& rhs);

double norm(const Rdecart& vec);

double dot(const Rdecart& lhs, const Rdecart& rhs);
