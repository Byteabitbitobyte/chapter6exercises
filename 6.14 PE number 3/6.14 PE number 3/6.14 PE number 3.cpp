#include <iostream>
#include <iomanip>
#include <stdio.h>      /* printf */
#include <cmath>       /* round, floor, ceil, trunc */


using namespace std;
using std::setw;
using std::setprecision;
using std::ios;
using std::endl;



int main()
{
    float row;
    double burger, result, length, gs, feet; /*gs for grill size*/
    int width, diameter;
    width = 18;
    diameter = 18;
   /* result = ceil(x); ceil command*/
    cout << "Input how many burgers you would like to cook at any time and I will calculate the size of grill needed:\n";
    cin >> burger;
    row = burger / 3;
    row = ceil(row);
    length = row * 6;
    gs = length * width * diameter;
    cout << "Size of grill needed in cubic inches: \n";
    cout << gs << "inches" << endl;
    feet = gs / 12; /*putting equation into cubic feet*/
    cout << "Size of grill needed in cubic feet: \n";
    cout << feet << "cubic feet" << endl;
  

    return 0;

}


