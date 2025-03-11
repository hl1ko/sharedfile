// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
using namespace std;

#include <cmath>
#include <iomanip>
#include <ios>

// functions
void nChar(int n, char c) 
{
	for (int i = 0; i < n; i++)
		cout << c;
}

void integerPower(double j, int k){
    double l = j;
    if(k > 0){
        for(int i = 1; i < k ; i++){
            l = l * j;
        }
    }else if(k == 0){
        l = 1;
    }else if(k < 0){
        for(int i = 1; i < abs(k) ; i++){
            l = l * j;
        }
        l = 1 / l;
    }else{
        cout << "unexp";
    }
    cout << l;
}
// functions

void showInfo()
{
	// Fill in your personal particulars below
	cout << "content deleted";
}

void Q1()
{
    ios_base::fmtflags f( cout.flags() );
    double radian = 0;
    const double PI = 3.14159265;
    cout << "Degree\t\tSin\t\tCos\n";
    for(int degree = 0; degree <=360;degree = degree+10){
        radian = degree * PI / 180;
        cout << degree << "\t\t" << sin(radian) << "\t\t" << cos(radian) << endl;
    }
    cout.flags( f );
}

void Q2()
{
    ios_base::fmtflags f( cout.flags() );
    double radian = 0;
    const double PI = 3.14159265;
    cout << "Degree\t\tSin\t\tCos\n";
    for(int degree = 0; degree <=360;degree = degree + 10){
        radian = degree * PI / 180;
        cout << noshowpos << degree << "\t\t" << setw(7) << fixed << setprecision(4) << showpos << sin(radian) << "\t\t" << cos(radian) << endl;
    }
    cout.flags( f );
}

void Q3()
{
    cout << "Enter the base value: ";
    double i = 0;
    cin >> i;
    cout << "Enter the exponent value: ";
    int j = 0;
    cin >> j;
    cout << i << " to the power " <<  j << " is "; 
    integerPower(i, j);
}

void Q4()
{
    int k, h;
    double j = 0;
    char c;
    cin >> j >> c;

    for(k = 0; k <= (ceil(j/2)); k++){
        nChar((k), c);
        cout << endl;
    }
    cout << endl << endl;
    for(k = 0; k <= (ceil(j/2)); k++){
        nChar(((ceil(j/2)) - k), ' ');
        nChar((k), c);
        cout << endl;
    }
    cout << endl << endl;
    for(k = 1; k<= j; k=k+2){
        nChar((j-k)/2, ' ');
        nChar((k), c);
        nChar((j-k)/2, ' ');
        cout << endl;
    }
    cout << endl << endl;
    for(k = 1; k<= j; k=k+2){
        nChar((j-k)/2, ' ');
        nChar((k), c);
        nChar((j-k)/2, ' ');
        cout << endl;
    }
    for(k = j -2 ; k >= 1; k= k - 2){
        nChar((j-k)/2, ' ');
        nChar((k), c);
        nChar((j-k)/2, ' ');
        cout << endl;
    }
    cout << endl << endl;
    for(h=1;h<=3;h++){
        for(k = 1; k<= j; k=k+2){
            nChar((j-k)/2, ' ');
            nChar((k), c);
            nChar((j-k)/2, ' ');
            cout << endl;
        }
    }
}

void Q5()
{   

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