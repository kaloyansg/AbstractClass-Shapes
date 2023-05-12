#include <iostream>
#include "Shape.h"

double SumPerimeters(Shape** const shapes, const size_t numberOfShapes)
{
	double sum = 0;

	for (size_t i = 0; i < numberOfShapes; i++)
	{
		sum += shapes[i]->getPerimeter();
	}

	return sum;
}

int main()
{
	int numberOfShapes = 3;

	Shape** shapes = new Shape * [numberOfShapes];	//Shape* shapes2[3];

	shapes[0] = new Triangle(5, 4, 3);
	shapes[1] = new Circle(3);
	shapes[2] = new Square(4);

	std::cout << "Sum of all: " << SumPerimeters(shapes, numberOfShapes);

	for (size_t i = 0; i < numberOfShapes; i++)
	{
		delete shapes[i];
	}
	delete[] shapes;
}