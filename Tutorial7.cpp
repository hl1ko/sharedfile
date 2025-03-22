// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void showInfo()
{
	// Fill in your personal particulars below
	cout << "content deleted";
}

void Q1()
{
    class Date
    {
    public:
        void setDate(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }
    
        void print()
        {
            cout << day << "-" << month << "-" << year;
        }
    
    private:
        // Declare private data members
        int day;
        int month;
        int year;
    };
        Date xmas;
        xmas.setDate(25, 12, 2013);
        cout << "xmas is: ";
        // Use xmas object to call print()
        xmas.print();
        cout << endl;
        return;
}

void Q2()
{
    class Car
    {
    public:
        Car() {
            // Your code for part (a) should be inserted here
            speed = 0;
        }
    
        void showSpeed() {
            cout << "The car is moving at " << speed << " km/h." << endl;
        }
    
        void accelerate(int a) {
            cout << "Accelerating ... " << endl;
            // Your code for part (b) should be inserted here
            speed = speed + a;
            if(speed > 150){
                speed = 150;
            }
            
        }
    
        // Your code for part (c) should be inserted here
        void decelerate(int a){
            cout << "Decelerating ... " << endl;
            speed = speed - a;
            if(speed < 0){
                speed = 0;
            }
        }
    
        // Your code for part (d) should be inserted here
        void stop(){
            cout << "Stopping ... " << endl;
            speed =0;
        }
    
    private:
        int speed;   // speed of the car, in km/h
    };
    Car myCar;

	myCar.showSpeed();
	myCar.accelerate(70);
	myCar.showSpeed();
	myCar.decelerate(20);
	myCar.showSpeed();
	myCar.accelerate(120);
	myCar.showSpeed();
	myCar.decelerate(100);
	myCar.showSpeed();
	myCar.stop();
	myCar.showSpeed();
	
	return;    
}

// Implement the Phone class here

class Phone{
    public:
    Phone(string x, string y){
        brandname = x;
        type = y;
    }

    void setPrice(double p){
        if(price < 0){
            price = price * -1;
        }
        price = p;
    }

    void showConfig(){
        cout << "Brand: " << brandname << endl << "OS: " << type << endl << "Price: $ " << fixed << setprecision(2) << price << endl;
    }

    private:
    string brandname;
    string type;
    double price;
};

void Q3()
{
    
	Phone iPhone("Apple", "iOS version 6");
	Phone noteTwo("Samsung", "Android 4.1");

	iPhone.setPrice(5588);
	noteTwo.setPrice(4630);

	cout << "Specification of iPhone:" << endl;
	iPhone.showConfig();
	cout << "\nSpecification of Note 2:" << endl;
	noteTwo.showConfig();
	
	return;
}

class Account{
    public:
        Account(double b){
            balance = b;
        }

        void credit(double amount){
            balance = balance + amount;
        }

        void debit(double amount){
            balance = balance - amount;
        }

        double getBalance(){
            return balance;
        }

    private:
        double balance; 
};

// Transfer money from a1 to a2, why pass-by-reference?
void transfer(Account &a1, Account &a2) 
{
    // (b) code for function body should be inserted here
    double amount = 0.00;
    cout << "How much to transfer: ";
    cin >> amount;
    cout << endl;
    if(amount <= a1.getBalance()){
        cout << "Transfer complete. ";
        a1.debit(amount);
        a2.credit(amount);
    }else if(amount > a1.getBalance()){
        cout << endl << "Insufficient balance. ";
    }
}


void Q4()
{
	Account peter(1000), mary(1500);
	int option;

	cout << fixed << setprecision(2);   // 2 decimal places

	do {
		cout << "\n";
		cout << "Peter's balance: " << peter.getBalance() << endl;
		cout << "Mary's balance:  " << mary.getBalance() << endl;
		cout << "------\n";
		cout << "(1) Transfer money from Peter to Mary\n";
		cout << "(2) Transfer money from Mary to Peter\n";
		cout << "(3) Quit\n";
		cout << "Option: ";
		cin >> option;

		switch (option) {
		case 1: transfer(peter, mary); break;
		case 2: transfer(mary, peter); break;
		case 3: cout << "Bye Bye.\n"; break;
		default: cout << "Incorrect option.\n";
		}
	} while (option != 3);

	return;
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