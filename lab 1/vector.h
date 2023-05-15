#pragma once

class vector
{
public:
	//конструкторы
	vector()
	{
		x = y = 0;
	}
	vector(double z1, double z2) :
		x(z1), y(z2) {}


	// Возврат координат 
	float Get_x();
	float Get_y();

	friend vector operator +(vector&, vector&);

	void Print_value(double x, double y);
	double Mod_vector(vector&);

private:
	double x;
	double y;
};

