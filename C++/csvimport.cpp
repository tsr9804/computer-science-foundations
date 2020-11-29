#include<fstream>
#include<string>
#include<sstream>
#include<iostream>
using namespace std;


void csv_import(string data[][10], int columns, int *records, string filename) {
    ifstream inFile(filename);
    string tempLine, line, tempVal;
    stringstream ss;
    int countLine, countVal;

    countLine = 0;
    while (getline(inFile, line)) {
        ss.str(line);
        countVal = 0;
        while(getline(ss, tempVal, ',')) {
            data[countLine][countVal] = tempVal;
            countVal++;
        }
        countLine++;
        ss.str("");
        ss.clear();
    }
    *records = countLine;
    inFile.close();
}


int main() {
    string data[10][10];
    int records;
    csv_import(data, 3, &records, "outfile.txt");
    return 0;
}

