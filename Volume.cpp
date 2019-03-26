#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    double mass, density, volume;

    cout << setprecision(2) << showpoint << fixed;
    cout << "Enter mass (in grams): " ;
    cin >> mass;
    cout << "Enter density (in g/cm^3): ";
    cin >> density;

    volume = mass / density;

    cout << "Volume is (in cm^3): " << volume <<endl;
    getch ();
    return 0;
}
