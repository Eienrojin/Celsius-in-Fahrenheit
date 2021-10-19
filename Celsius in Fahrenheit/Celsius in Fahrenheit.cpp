#include <iostream>
using namespace std;

double convert(double);

int main()
{
    double cel, fahr;
    cout << "Please enter a Celsius volume: ";
    cin >> cel;

    fahr = convert(cel);
    cout << cel << " degrees Celsius is " << fahr << " degrees Fahrenheit" << endl;
}

double convert(double cel)
{
    return 1.8 * cel + 32;
}