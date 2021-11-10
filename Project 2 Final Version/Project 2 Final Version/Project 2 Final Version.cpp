#include <iostream>
using namespace std;

//Kaeden's code
int GetData();
int GetData();
void IsOddEven(int number);
int FindNumDigits(int number);
int FindDigitAtPosition(int number, int Position);
void DisplayMultiplicationTable();

//James' code
void DisplayMenu(int& menuChoice);
void ProcessMenuChoice(int menuChoice, int& number);
void IsPosNeg(int number);
void DisplayAdditionTable();

//James' code
int main()
{
    //local variables
    int number = 0;
    int menuChoice = 0;
    //get number from GetData
    number = GetData();
    do
    {
        //call DisplayMenu
        DisplayMenu(menuChoice);
        //call ProcessMenuChoice
        ProcessMenuChoice(menuChoice, number);
    }
    while (menuChoice != 7);
}


//Kaeden's code
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

//Kaeden's code
void IsOddEven(int number)
{
    number %= 2;
    if (number == 1)
        cout << "The number is odd\n";
    else
        cout << "The number is even\n";
}
//Kaeden's code
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
//Kaeden's code
int FindDigitAtPosition(int number, int Position)
{
    cout << "What is the position of the digit you would like to find?\n";
    cin >> Position;
    int Digit;
    int Finder = pow(10.0, Position);
    int Operator = pow(10.0, Position - 1);
    Digit = number % Finder;
    Digit /= Operator;
    return Digit;
}
//Kaeden's code
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

//James' code
void DisplayMenu(int& menuChoice)
{
    do {
        cout << "To pick from the menu, press the number next to an option.\n" << endl
            << "1. Is your number positive or negative?\n"
            << "2. Is your number odd or even?\n"
            << "3. How many digits are in your number?\n"
            << "4. Choose specific digit\n"
            << "5. See addition table\n"
            << "6. See multiplication table\n"
            << "7. Exit\n" << endl;

        cin >> menuChoice;

        if (menuChoice < 1 || menuChoice > 7)
        {
            cout << "Error: no available option has your number. Please try again.\n" << endl;
        }
    } while (menuChoice < 1 || menuChoice > 7);
}

//James' code
void ProcessMenuChoice(int menuChoice, int& number)
{
    int Position = 0;
    int Digit = 0;
    switch (menuChoice)
    {
    case 1:
        IsPosNeg(number);
        break;
    case 2:
        IsOddEven(number);
        break;
    case 3:
        Digit = FindNumDigits(number);
        cout << "There are " << Digit << " digits in your number.\n";
        break;
    case 4:
        Digit = FindDigitAtPosition(number, Position);
        cout << "The digit at this position is " << Digit << endl;
        break;
    case 5:
        DisplayAdditionTable();
        break;
    case 6:
        DisplayMultiplicationTable();
    case 7:
        void exit();
        break;
    }
}

//James' code
void IsPosNeg(int number)
{
    if (number < 0)
    {
        cout << "Your number is negative.\n";
    }
    else if (number > 0)
    {
        cout << "Your number is positive.\n";
    }
    else
    {
        cout << "Your number is 0, neither positive nor negative.\n";
    }
}

//James' code
void DisplayAdditionTable()
{
    cout << "| 0| 1| 2| 3| 4| 5| 6| 7| 8| 9|10|11|12|\n";
    cout << "| 1| 2| 3| 4| 5| 6| 7| 8| 9|10|11|12|13|\n";
    cout << "| 2| 3| 4| 5| 6| 7| 8| 9|10|11|12|13|14|\n";
    cout << "| 3| 4| 5| 6| 7| 8| 9|10|11|12|13|14|15|\n";
    cout << "| 4| 5| 6| 7| 8| 9|10|11|12|13|14|15|16|\n";
    cout << "| 5| 6| 7| 8| 9|10|11|12|13|14|15|16|17|\n";
    cout << "| 6| 7| 8| 9|10|11|12|13|14|15|16|17|18|\n";
    cout << "| 7| 8| 9|10|11|12|13|14|15|16|17|18|19|\n";
    cout << "| 8| 9|10|11|12|13|14|15|16|17|18|19|20|\n";
    cout << "| 9|10|11|12|13|14|15|16|17|18|19|20|21|\n";
    cout << "|10|11|12|13|14|15|16|17|18|19|20|21|22|\n";
    cout << "|11|12|13|14|15|16|17|18|19|20|21|22|23|\n";
    cout << "|12|13|14|15|16|17|18|19|20|21|22|23|24|\n";
}