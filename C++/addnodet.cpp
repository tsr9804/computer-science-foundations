#include<iostream>
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

/*
int main() {
    NODE* data = nullptr;
    add_node_tail(&data,"aspen","olmsted","aspeno@aol.com");
    add_node_tail(&data,"Sam","Riggs","sam@aol.com");
    return 0;
}
*/
