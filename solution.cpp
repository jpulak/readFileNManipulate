// program for manipulating files

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// function protoypes

void processData(ifstream &inFile, ofstream &outFile);

// main func 

int main() {
    string fileName;
    bool fileOpened;

    // input file name

    cout << "Enter the input file name: " << endl;
    cin >> fileName;

    // open files

    ifstream inFile(fileName);
    ofstream outFile("badvalues.txt");
    fileOpened = true;

    // validation of open

    if (!inFile) 
    {
        cout << "The file \"" << fileName << "\" could not be opened." << endl;
        fileOpened = false;
    }

    // if the file opens run function 

    if (fileOpened) 
    {
        processData(inFile, outFile);
        inFile.close();
        outFile.close();
    }
    return 0;
}

// funciton for processing data

void processData(ifstream &inFile, ofstream &outFile) {
    double num = 0;
    int totalValues = 0;
    int validCount = 0;
    double validTotal = 0.0;
    int invalidCount = 0;
    outFile << fixed << setprecision(3);
    
    //run validation
    
    while (inFile >> num) {
        ++totalValues;
        if (num >= 1 && num <= 150) 
        {
            ++validCount;
            validTotal += num;
        } 
        else 
        {
            ++invalidCount;
            outFile << num << endl;  // write invalid data to files
        }
    }

    // display values

    cout << "Total number of values read: " << totalValues << endl;
    cout << "Valid values read: " << validCount << endl;
    cout << "Invalid values read: " << invalidCount << endl;
    if (validCount > 0) 
    {
        cout << "The average of the valid numbers read = " 
             << fixed << setprecision(2) << (validTotal / validCount) << endl;
    } 
    else 
    {
        cout << "The file did not contain any valid values." << endl;
    }
}
