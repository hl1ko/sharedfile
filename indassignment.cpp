// SEHH2042 Assignment 1
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
using namespace std;

void showInfo()
{
	cout << "content deleted";
}

void Q1()
{
	int i = 24751, j=0, k=0, h=0, ck = 0, ch = 0;
    do{
        cin >> i;
        if((i > 0) && ((abs(i) % 2) == 0)){
            k = k + i;
            ck ++;
        }else if((i < 0) && ((abs(i) % 2) == 1)){
            h = h + i;
            ch ++;
        }
        j = j + k + h;
        k = 0;
        h = 0;
    }while(i != 0);
    cout << ck << endl << ch << endl << j << endl;
}

void Q2()
{
	int i = 0,i1 = 0,i2 = 0;
    double h = 0;
    char c = '0';
    int fastprice[4] = {10,70,50};
    int slowprice[4] = {6,22,16};
    int k[3] = {0,0,0};
    cin >> c >> i1 >> i2;
    i = i1;
    do{
        i ++;
        i = i % 24;
        
        switch (i){
        case 0 ... 8:
            k[0] = k[0] + 1;
            break;
        case 9 ... 18:
            k[1] = k[1] + 1;
            break;
        case 19 ... 22:
            k[2] = k[2] + 1;
            break;
        case 23:
            k[0] = k[0] + 1;
            break;
        default :
            break;
        }
    }while(i != i2 && i < 24);

    if(i2 < i1){
        i2 = i2  + 24;
    }
    i = 0;
    i = i2 - i1;
    if(c == 'f'){
        i = i - 1;
        h = k[0] * fastprice[0] + k[1] * fastprice[1] + k[2] * fastprice[2];
    }else if(c == 'n'){
        i = i - 4;
        h = k[0] * slowprice[0] + k[1] * slowprice[1] + k[2] * slowprice[2];
    }
    if(h > 100){
        h = h * 0.85;
    }
    if(i > 0){
      h = h + i * 22;
    }
    cout << fixed << std::setprecision(2) << h;
}

void Q3()
{
	int i = 0, j = 0, k = 0;
    cin >> k;
    if((k % 2) == 0){
        cout << "E";
        return;
    }
    for(i=1;i<=k;i++){
        for(j=1;j<=k;j++){
            if((i == 1) || (i == ((k / 2) + 1)) || (j == k) || ((i < ((k / 2) + 1)) && (j == 1))){
                cout << "*";
            }else{
                cout << " ";
            }   
        }
        cout << endl;
    }
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