#pragma once

class MyVector2D
{
public:
	float x;
	float y;

public:
	MyVector2D()
	{
		x = 0;
		y = 0;
	}
	MyVector2D(float x_t, float y_t):x(x_t), y(y_t)
	{

	}
	void operator=(const MyVector2D& v);
	MyVector2D& operator+(const MyVector2D& v);
	float operator*(const MyVector2D& v);

};
