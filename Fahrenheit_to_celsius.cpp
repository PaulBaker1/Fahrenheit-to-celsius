#include <iostream>

using namespace std;

int main()
{
    float fahr,cels;

    cout<<"Please enter the temperature in Fahrenheit: ";
    cin>>cels;

    fahr = (cels * 1.8) + 32;
    cout << "Fahrenheit = " << fahr << endl;
    return 0;
}
