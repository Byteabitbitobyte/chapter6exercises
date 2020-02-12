#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;
using std::setprecision;
using std::ios;
const float Pi = 3.14;

int main()
{

    double diameter, height, volume, radius, cinch, gallon, unit, total;
    cout << "Please enter the diameter followed by the height of the pool in feet(ft): ";
    cin >> diameter >> height;
    radius = diameter / 2 ;
    volume = height * Pi * (radius * radius);
    cinch = volume * 1728;
    gallon = cinch / 231;
    unit = gallon / 748;
    total = unit * 1.80;
    cout << "Amount needed in dollars to fill this pool:" << setw(8) <<"$" << setprecision(4) << total;
    
    return 0;

}




