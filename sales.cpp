#include <iostream>
#include <fstream> 

using namespace std;

int main(){
    int days = 0; // keeps track of the days
    bool firstEntry = true;
    double total, entry; 
    // total sales,  current entry
    double highest = 0, lowest = 0; // highest and lowest entries in a day

    // Step 1: intial prompt
    cout << "Hello, welcome to the sales calculator. Please enter your sales for each day or -1 at any time to exit." << endl;

    do {
        cout << "Entry: "; // didn't put endl because I like how cin looks after :
        cin >> entry;

        if(entry < -1){ //invalid negative number
            cout << endl << "A sale must be positive. Please try again or enter -1 to exit." << endl;
            continue; // continue to next loop
        }
        if(entry >= 0){ // valid sale
            days++; // increment days
            total += entry; // add entry to total

            if (firstEntry){
                highest = lowest = entry;
                firstEntry = false;
            }
            // check if entry is highest or lowest
            if(entry > highest){ 
                highest = entry;
                // special message that notes entry is highest
                cout << endl << entry << "(highest) sales entered for day " << days << endl;
            }
            else if(entry < lowest ){
                lowest = entry; // set lowest to current entry
                // special message that notes entry is lowest
                cout << endl << entry << "(lowest) sales entered for day " << days << endl;
            }
            else{
                cout << endl << entry << " sales entered for day " << days << endl;
            }

        }

    } while(entry != -1); // when user enters -1 for entry it means exit
    
    // handle case where there isn't a sale entered

    if(days == 0){

        cout << "\nNo sales? Maybe hire a better marketing team....";

        return 0;
    }

    // tell user that report is about to be made
    cout << "Printing report, please wait..." << endl;
 
    // make file for report

     ofstream outFile("sales.txt", ios::app);
            if (outFile.is_open()) {
                // format sales report file
                outFile << "--- Sales Report ---\n";
                outFile << "Days recorded: " << days << "\n";
                outFile << "Total sales : $" << total << "\n";
                outFile << "Average/day: $" << total / days << "\n"; //average = total/days
                outFile << "Lowest day: $" << lowest << "\n";
                outFile << "Highest day: $" << highest << endl;;
                outFile.close();
                // notify user it was successful
                cout << "\n(... Report successfully saved in 'sales.txt'!)\n"; 
                cout << "Best of luck in your business endeavors! :)";
            } else {
                cout << "\nError: Could not save results to file.\n"; // error
            }
}