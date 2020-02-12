#include <iostream>
#include <iomanip>
#include <stdio.h>      /* printf */
#include <cmath>       


using namespace std;
using std::setw;
using std::setprecision;
using std::ios;
using std::endl;

int main()
{

	double dp, p, payment, r, m, a, b, c, d, e, f; /*a/b/c for top side of equation, d,e,f for bottom. C / F*/
	dp = 1000;
	
	cout << "Please enter the amount of the vehicle in US dollars: \n" << endl;
	cin >> p;
	cout << "Please enter the desired interest rate without a % sign: \n" << endl;
	cin >> r;
	cout << "Please enter the amount of years, in month format: \n" << endl;
	cin >> m;
	a = p - dp;
	b = r / 12;
	c = a * b;
	d = (1 - (1 + r / 12));
	e = m * -1;
	f = pow(d, e);
	payment = c / f;
	cout << "Total owed per month: \n";
	cout << "$" << payment << setprecision(2) << endl;






	return 0;
}