#include<iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;
    
    cout << "Please temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
    celsius = (fahrenheit - 32) * 5 / 9; // Formula to caltulate Fahrenheit to Celsius

    cout<< "temperature in Celsius : " << celsius;
    
    return 0;
}
