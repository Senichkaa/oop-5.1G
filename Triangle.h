#pragma once
#include "Triad.h"
class Triangle :public Triad
{
public:
	Triangle();
	Triangle(double a, double b, double c) throw(logic_error);
	Triangle(const Triangle& v);

	Triangle& operator ++() throw(out_of_range);
	Triangle& operator --() throw(InheritedException);
	Triangle operator ++(int) throw(Exception);
	Triangle operator --(int) throw (InheritedException);

	double Sum();
	double Square() const;
	void Angle(double& A, double& B, double& C) const;
};

