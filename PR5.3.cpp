#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double s(const double x);

int main()
{
	double tp, tk, z;
	int n;

	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;

	double dt = (tk - tp) / n;
	double t = tp;
	int i = 0;

	cout << "------------------------------" << endl;
	cout << "|  n  |    t     |     z     |" << endl;
	cout << "------------------------------" << endl;

	while (t <= tk)
	{
		z = s(pow(t, 2) + 1) + 2 * pow(s(t), 2) * (1 - t) + s(1);

		cout << "| " << setw(3) << i << " | "
			<< setw(7) << fixed << setprecision(4) << t << " | "
			<< setw(10) << fixed << setprecision(4) << z << " |" << endl;

		cout << "------------------------------" << endl;

		t += dt;
		i++;
	}
	return 0;
}
double s(const double x)
{
	if (abs(x) > 1)
		return (pow(cos(x), 2) + 1) / exp(x);
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = pow(x, 2) / ((2 * k + 2) * (2 * k + 3));
			a *= R;
			S += a;
		} while (k < 4);
		return S;
	}
}