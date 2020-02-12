#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;
using std::setprecision;
using std::ios;
using std::endl;

const float Pi = 3.14159;

int main()
{

    int radius;
    double C, A;
    cout << "Input radius value for circumferance of a circle:\n";
    cin >> radius;
    C = 2 * Pi * radius;
    cout << "Circumferance of a circle:\n";
    cout.setf(ios::fixed);
    cout << setprecision(4) << C  << endl;
    cout << "Input radius value for area of a circle:\n";
    cin >> radius;
    A = Pi * (radius * radius);
    cout << "Area of a circle:\n";
    cout.setf(ios::fixed);
    cout << setprecision(5) << A << endl;

    return 0;

}


