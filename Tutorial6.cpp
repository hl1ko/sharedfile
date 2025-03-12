// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ios>
using namespace std;

void showInfo()
{
	cout << "content deleted";
}

double hypoten(double x, double y)
{
	return (sqrt(x*x + y*y));
}

void sumAvg(int x, int y, int &su, float &ave)
{
	double j = 0;
	for(int i = x; i<=y; i++){
		su = su + i;
		j = j + 1;
	}
	ave = (su / j);
}

double calcPI(int x)
{
	double j = 1, c = 0;
	for(int i = 0; i < x;  i++){
		c = c + (4/j);
		j = abs(j) + 2;
		if((i % 2) == 0){
			j = j * -1;
		}
	}
	return c;
}

void printBinary(int x)
{
    if (x == 0) {
        return;
    }
    printBinary(x / 2);
    std::cout << (x % 2);
}

void Q1()
{
	double i, j;
	cout << "Please enter the length of first side: ";
	cin >> i;
	cout << "Please enter the length of second side: ";
	cin >> j;
	cout << "Hypotenuse of a " << i << " by " << j << " right triangle is " << hypoten(i, j);
}

void Q2()
{
	int lower = 0, upper = 0, sum = 0;
	float average = 0;
	cout << "Enter the lower bound: ";
	cin >> lower;
	cout << "Enter the upper bound: ";
	cin >> upper;
	sumAvg(lower, upper, sum, average);
	cout << "From " << lower << " to " << upper << ":\n";
	cout << "Sum     = " << sum << endl;
	cout << "Average = " << average << endl;
}

void Q3()
{
	std::ios_base::fmtflags f( cout.flags() );
	int h = 0;
	cout << "How many terms for PI: ";
	cin >> h;
	cout << setprecision(15) << calcPI(h);
	cout.flags( f );
}

void Q4()
{
	int num;
	cout << "Input a positive decimal integer: ";
	cin >> num;
	cout << "The binary version is ";
	printBinary(num);
	cout << endl;
}

void Q5()
{
	// =====================================
	// Insert your codes for Question 5 here
	// No need main() and return 0
	// =====================================
}

// IMPORTANT: DO NOT MODIFY main()
int main()
{
	char prog_choice;

	do {
		cout << "\n\n";
		cout << "Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Enter question number ('q' to quit): ";
		cin >> prog_choice;
		cout << "\n\n";

		switch (prog_choice) {
		case '0': showInfo(); break;
		case '1': Q1(); break;
		case '2': Q2(); break;
		case '3': Q3(); break;
		case '4': Q4(); break;
		case '5': Q5(); break;
		case 'q': break;
		default:
			cout << "No such question " << prog_choice << endl;
			break;
		}
	} while (prog_choice != 'q');

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
// END