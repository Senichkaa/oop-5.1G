#include "Triangle.h"

Triangle::Triangle()
	:Triad()
{
}

Triangle::Triangle(double a, double b, double c) throw(logic_error)
{
	if (!(a + b > c && b + c > a && a + c > b))
		throw logic_error("Condition is not met");

	set_a(a); set_b(b); set_c(c);
}

Triangle::Triangle(const Triangle& v)
	:Triad(v)
{
}

Triangle& Triangle::operator++() throw(out_of_range)
{
	this->set_a(this->get_a() + 1);
	if (get_a() > 10 || get_b() > 10 || get_c() > 10)
		throw out_of_range("Side is bigger than 10");
	//стандарт
	return *this;
}

Triangle& Triangle::operator--() throw(InheritedException)
{
	this->set_b(this->get_b() - 1);
	if (get_b() == 0)
		throw new InheritedException();
	//нащадок
	return *this;
}

Triangle Triangle::operator++(int) throw(Exception)
{
	Triangle a(*this);
	this->set_a(this->get_a() + 1);
	if (get_a() > 10 || get_b() > 10 || get_c() > 10)
		throw Exception("Side is bigger than 10");
	//власний
	return a;
}

Triangle Triangle::operator--(int) throw(InheritedException)
{
	Triangle a(*this);
	this->set_b(this->get_b() - 1);
	if (get_b() == 0)
		throw InheritedException();
	return a;
}

double Triangle::Sum()
{
	return get_a() + get_b() + get_c();
}

double Triangle::Square() const
{
	double a = get_a();
	double b = get_b();
	double c = get_c();
	double S = 0;
	double p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	return S;
}

void Triangle::Angle(double& A, double& B, double& C) const
{
	const double PI = atan(1) * 4;
	double a = get_a();
	double b = get_b();
	double c = get_c();

	double S = Square();
	double sinA = (S * 2) / (a * b);
	double x1 = asin(sinA);
	A = (x1 * 180) / PI;

	double sinB = (sinA * b) / c;
	double x2 = asin(sinB);
	B = (x2 * 180) / PI;

	C = 180 - (A + B);
}
