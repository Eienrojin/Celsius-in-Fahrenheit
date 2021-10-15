#include <iostream>
using namespace std;

int main()
{
    double cel, fahr;
    cout << "Please enter a Celsius volume: ";
    cin >> cel;

    fahr = 1.8 * cel + 32;
    cout << cel << " degrees Celsius is " << fahr << " degrees Fahrenheit" << endl;
}