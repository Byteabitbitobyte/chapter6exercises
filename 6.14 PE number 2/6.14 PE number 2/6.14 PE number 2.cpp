#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;
using std::setprecision;
using std::ios;
using std::endl;
const float cpu1 = 75.99;
const float cpu2 = 8.90;
const float cpu3 = 4.95;
const float cpu4 = 12.95;
const float cpu5 = 22.00;

int main()
{

    double tc1, tc2, tc3, tc4, tc5, Overallcost;
    int q1 = 25;
        int q2 = 100;
        int q3 = 25;
        int q4 = 20;
        int q5 = 100;



    cout << "Description- \t -Cost Per Unit in $- \t  -Quantity Needed- \t -Total Cost- \n";
    tc1 = q1 * cpu1;
    cout << "Joists" << setw(18) << cpu1 << setw(25) << q1 << setw(25) << tc1 << '\n' ; 
    tc2 = q2 * cpu2;
    cout << "2x6" << setw(20) << cpu2 << setw(26) << q2 << setw(22) << tc2 << '\n';
    tc3 = q3 * cpu3;
    cout << "2x4" << setw(21) << cpu3 << setw(25) << q3 << setw(25) << tc3 << '\n';
    tc4 = q4 * cpu4;
    cout << "4x4" << setw(21) << cpu4 << setw(25) << q4 << setw(22) << tc4 << '\n';
    tc5 = q5 * cpu5;
    cout << "4x8 Sheet Plywood" << setw(4) << cpu5 << setw(28) << q5 << setw(22) << tc5 << '\n';

    Overallcost = tc1 + tc2 + tc3 + tc3 + tc5;
    cout << "Overall cost of the supplies :\t";
    cout << Overallcost << endl;
   


    return 0;

}
