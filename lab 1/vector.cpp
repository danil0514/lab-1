#include "vector.h"
#include <iostream>
#include <string> 
#include <math.h>

void vector::Print_value(double x, double y)
{
	std::string message_value_vector = "Значение x = (" + std::to_string(x) + ") Значение y = ( " + std::to_string(y);
	std::cout << message_value_vector << '\n';
}

double vector::Mod_vector(vector&p)
{
	return (sqrt(p.x*p.x+p.y*p.y));
}

float vector::Get_x()
{
	return x;
}
float vector::Get_y()
{
	return y;
}

vector operator+(vector &p, vector &q)
{
	return vector(p.x + q.x ,p.y+p.y);
}
