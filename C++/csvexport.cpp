#include<fstream>
#include<string>
using namespace std;

void csv_export(string data[][10], int records, int columns, string filename){
    ofstream outFile(filename);
    string recordLine;
    for(int i = 0; i < records; i++) {
        recordLine = "";
        for(int j = 0; j < columns; j++) {
            recordLine += data[i][j] + ",";
        }
        outFile << recordLine.substr(0, recordLine.length()-1) << endl;
    }
    outFile.close();
}



