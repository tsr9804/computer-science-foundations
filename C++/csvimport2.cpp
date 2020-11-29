#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

class NODE {
public:
    string firstname;
    string lastname;
    string email;
    NODE* next;
};


NODE* createNODE(string firstname,string lastname, string email) {
    NODE *newNODE = new NODE();
    newNODE -> firstname = firstname;
    newNODE -> lastname = lastname;
    newNODE -> email = email;
    return newNODE;
}

void add_node_tail(NODE** data, string firstname,string lastname, string email) {
    NODE *newNODE = createNODE(firstname, lastname, email);
    if(*data == nullptr) {
        *data = newNODE;
    } else {
        NODE *temp = *data;
        while(temp -> next != nullptr) {
            temp = temp ->next;
        }
        temp -> next = newNODE;
    }
}

void add_node_head(NODE** data, string firstname,string lastname, string email){
    NODE *newNODE = createNODE(firstname, lastname, email);
    if(*data == nullptr) {
        *data = newNODE;
    } else {
        newNODE -> next = *data;
        *data = newNODE;
    }
}

void csv_import2(NODE** data, string filename){
    ifstream inFile(filename);
    string tempLine, line, tempVal;
    stringstream ss;
    int countVal;
    string valArr[3];

    while (getline(inFile, line)) {
        ss.str(line);
        countVal = 0;
        while(getline(ss, tempVal, ',')) {
            valArr[countVal] = tempVal;
            countVal++;
        }
        add_node_tail(data, valArr[0], valArr[1], valArr[2]);
        ss.str("");
        ss.clear();
    }
    inFile.close();
}


int main() {
    NODE* data = nullptr;
    csv_import2(&data, "outfile.txt");
    return 0;
}

