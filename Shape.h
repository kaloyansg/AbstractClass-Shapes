#pragma once
class Shape
{
public:
	virtual double getPerimeter() const = 0;

	virtual ~Shape() = default;
};

class Triangle : public Shape
{
private:
	double a, b, c;

public:
	Triangle(const double a, const double b, const double c) : a(a), b(b), c(c) {}

	double getPerimeter() const override
	{
		return a + b + c;
	}
};

class Circle : public Shape
{
private:
	double r;

public:
	Circle(const double  r) : r(r) {}

	double getPerimeter() const override
	{
		return 3.14 * 2 * r;
	}
};

class Square : public Shape
{
private:
	double a;

public:
	Square(const double a) : a(a) {}

	double getPerimeter() const override
	{
		return a*4;
	}
};
