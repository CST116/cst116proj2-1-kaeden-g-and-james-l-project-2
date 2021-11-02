
#include <iostream>
using namespace std;

int GetData();

void IsOddEven(int number);

int FindNumDigits(int number);

int FindDigitAtPosition(int number, int Position);

void DisplayMultiplicationTable();

int main()
{
	
}

int GetData()
{
	int number;
	do
	{
		cout << "Enter Number:";
		cin >> number;
	} while (number > 1000000 || number < -1000000);
	return number;
}

void IsOddEven(int number)
{
	number %= 2;
	if (number == 1)
		cout << "The number is odd\n";
	else
		cout << "The number is even\n";
}

int FindNumDigits(int number)
{
	int Digit = 1;
	for (int i = 0; abs(number) >= 10; i++)
	{
		number /= 10;
		Digit += 1;
	}

	return Digit;
}

int FindDigitAtPosition(int number, int Position)
{
	int Digit;
	int Finder = pow(10.0, Position);
	int Operator = pow(10.0, Position - 1);
	Digit = number % Finder;
	Digit /= Operator;
	return Digit;
}

void DisplayMultiplicationTable()
{
	cout << "| 0| 1| 2| 3| 4| 5| 6| 7| 8|  9| 10| 11| 12|\n";
	cout << "| 1| 1| 2| 3| 4| 5| 6| 7| 8|  9| 10| 11| 12|\n";
	cout << "| 2| 2| 4| 6| 8|10|12|14|16| 18| 20| 22| 24|\n";
	cout << "| 3| 3| 6| 9|12|15|18|21|24| 27| 30| 33| 36|\n";
	cout << "| 4| 4| 8|12|16|20|24|28|32| 36| 40| 44| 48|\n";
	cout << "| 5| 5|10|15|20|25|30|35|40| 45| 50| 55| 60|\n";
	cout << "| 6| 6|12|18|24|30|36|42|48| 54| 60| 66| 72|\n";
	cout << "| 7| 7|14|21|28|35|42|49|56| 63| 70| 77| 84|\n";
	cout << "| 8| 8|16|24|32|40|48|56|64| 72| 80| 88| 96|\n";
	cout << "| 9| 9|18|27|36|14|15|16|17| 16| 90| 99|108|\n";
	cout << "|10|10|20|30|40|50|60|70|80| 90|100|110|120|\n";
	cout << "|11|11|22|33|44|55|66|77|88| 99|110|121|132|\n";
	cout << "|12|12|24|30|48|60|72|84|96|108|120|132|144|\n";
}