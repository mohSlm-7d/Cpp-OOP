#include<iostream>
#include<cmath>
using namespace std;
void binToDec(int number)
{
	int total = 0;
	int i = 10;
	while (number / i != 0)
	{
		i *= 10;
	}
	int power = 0;
	total += (number % 10) * pow(2, power);
	power++;
	for (int j = 10; j < i/10; j *= 10)
	{
		total += ((number / j) % 10) * pow(2, power);
		power++;
	}
	i = i / 10;
	total += (number / i) * pow(2, power);
	cout << "The decimal value of the binary number is: " << total << endl;
}
bool isBinary(int number)
{
	int m = 10;
	while (number / m != 0)
	{
		m *= 10;
	}
	if (number % 10 != 0 && number % 10 != 1)
		return false;
	
	for (int i = 10; i < m / 10; i *= 10)
	{
		if ((number / i) % 10 != 0 && (number / i) % 10 != 1)
			return false;
	}
	if (number / m != 0 && number / m != 1)
		return false;
	return true;
}
void main()
{
	int binNum;
	cout << "Plese enter a binary number: ";
	cin >> binNum;
	if (isBinary(binNum) == true)
	{
		cout << endl << "The binary number is valid." << endl;
		binToDec(binNum);
	}
	else
		cout << "The number you entered is NOT binary." << endl;
}