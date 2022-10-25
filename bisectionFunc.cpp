#include <iostream>
#include <cmath>

using namespace std;


double F(double x) {
    return  x*x-9*x+14; 
}


double bisectionFun(double a, double b, double e) {
	while (b - a > e) {
		if (F(a)*F((b+a)*0.5) == 0)
			break;
		else if (F(a)*F((b+a)*0.5) > 0)
			a = (b+a)*0.5;
		else
			b = (b+a)*0.5;
	}
	return (b+a)*0.5;
}


int main() {
	double e, a, b;
	cout << "enter eps (accuracy) - ";
	cin >> e;
	cout << "enter a (first point) - ";
	cin >> a;
	cout << "enter b (second point) - ";
	cin >> b;
	
	cout << "Bisection Function - " << bisectionFun(a, b, e) << endl;

	return 0;
}
