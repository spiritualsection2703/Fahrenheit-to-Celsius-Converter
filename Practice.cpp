#include <iostream>

using namespace std;


int main()
{

	double tempf = 78.0; //This tempature is currently of New York. Temperatures of Cities may vary.
	double tempc;

	tempc = (tempf - 32) / 1.8; // formula to convert a temperature from Fahrenheit (F) to Celsius (C)

	std::cout << "The Temperature is " << tempc << " degrees Celsius." << '\n';


	return 0;
}

