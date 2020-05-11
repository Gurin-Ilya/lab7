#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

//подсчёт у'', если известны y',y,x
double F_y11(double y1, double y, double x) {
	return (x * exp(-x) + 4 * y - y1);
}
//подсчёт у''', если известны y'',y',x
double F_y111(double y11, double y1, double x) {
	return (exp(-x) - x * exp(-x) + 4 * y1 - y11);
}
//подсчёт у'''', если известны y''',y'',x
double F_y1111(double y111, double y11, double x) {
	return (x * exp(-x) - 2 * exp(-x) + 4 * y11 - y111);
}
//Разложение в ряд тейлора
double teilor(double y, double y1, double y11, double y111, double h) {
	double phi3 = y1 + (h * y11 / 2) + (h * h * y111 / 6);
	return (y + h * phi3);
}
int main()
{
	ofstream fout;
	ofstream fout1;
	ofstream fout2;
	fout.open("y.txt");
	fout1.open("y1.txt");
	fout2.open("phaza.txt");
	double h = 0.1, y = 1, y1 = 0, x = 0;
	double y111, y11, y1111;
	while (x <= (2+h)) {
		y11 = F_y11(y1, y, x);
		y111 = F_y111(y11, y1, x);
		y1111 = F_y1111(y111, y11, x);
		double temp_y1 = y1;
		y1 = teilor(y1, y11, y111, y1111, h);
		y = teilor(y, temp_y1, y11, y111, h);
		cout << "y = "<< y << "\ty' = " << y1 << endl;
		fout << x << "\t" << y << endl;
		fout1 << x << "\t" << y1 << endl;
		fout2 << y << "\t" << y1 << endl;
		x += h;
	}
	fout.close();
	fout1.close();
	fout2.close();
	return 0;
}
