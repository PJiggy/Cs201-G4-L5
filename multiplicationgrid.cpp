#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    const int MAX = 12;
    bool exit = false;
    ofstream outFile("table.txt");

    for (int a=1; a <= MAX; a++){
        
        for (int b = 1; b <= MAX; b++){

            if (((a * b) % 5 == 0) || ((a * b) % 7 == 0)) {
                continue;
            }
            if ((a*b) > 90) {

                cout << " Program ended because product exceeded 90." << endl;
                exit = true;
                break;
            }
            cout << setw(5) << a << " x " << b << " = " << a*b << endl;
            
            if (outFile.is_open()) {
                outFile << setw(5) << a << " x " << b << " = " << a*b << endl;

            } 
            else {
                cout << "\nError: Could not save results to file.\n"; // error
            }

        }
        if (exit){
            break;
        }
        
    }











    return 0;
}