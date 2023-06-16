#include <iostream>
#include <iomanip>

using namespace std;
double tempFaren();
double tempCel(double tempf);


double tempFaren()
{
	double tempf;

	std::cout << "What is the temperature in your city: ";
	cin >> tempf;

	return tempf;
}

double tempCel(double tempf)
{
	double tempC = (tempf - 32) / 1.8;

	return tempC;

}


int main()
{



	double temperature = tempFaren();
	double celcius = tempCel(temperature);

	cout << "The Temperature in your city is " << temperature << " (f) degrees." << '\n';
	cout << "The Temperature in your city is " << fixed << setprecision(1) << celcius << " (C) degrees. ";


	return 0;
}

