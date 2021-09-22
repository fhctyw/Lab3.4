// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 13

#include <iostream>
using namespace std;

int main()
{
	// вхідні дані
	double R1, R2;
	double x, y; 

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((x * x + y * y <= R2 * R2 && x <= 0 && y >= 0) || 
		((x * x + y * y >= R2 * R2 && x >= 0 && y <= 0) && (x * x + y * y <= R1 * R1 && x >= 0 && y <= 0)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}