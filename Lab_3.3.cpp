// Lab_03_3.cpp
// < Проців Роксолана >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 20

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double R;
	double y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= 0)
		y = -1 / 2.0 * x;
	else
		if (x > 0 && x <= R)
			y = R - sqrt(R * R - x * x);
		else
			if (x > R && x <= 2 * R)
				y = sqrt(R * R - pow(x - R, 2));
			else
				y = -(x - 2 * R) / (6 - 2 * R);

	cout << endl;
	cout << "y= " << y << endl;

	cin.get();
	return 0;
}