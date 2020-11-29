// ShowTicket class
#include<string>
#include<vector>

class Ticket {
    bool isSold;
protected:
    std::string row;
    std::string seatNumber;
public:
    Ticket(std::string row, std::string seatNumber){
        this -> row = row;
        this -> seatNumber = seatNumber;
        isSold = false;
    };
    Ticket() { isSold = false; }
    bool is_sold() const { return isSold; }
    void sell_seat() { isSold = true; }
    std::string getRow(){return row;}
    std::string getSeatNumber(){return seatNumber;}
    virtual std::string print_ticket() {
        if(isSold)
            return row + " " + seatNumber + " sold";
        else
            return row + " " + seatNumber + " available";
    }
};

class SportTicket :public Ticket {
    bool beerSold;
public:
    SportTicket(std::string row, std::string seatNumber)
    : Ticket (row, seatNumber)
    {
        beerSold = false;
    }

    bool beer_sold() {
        return beerSold;
    }

    void sell_beer() {
        beerSold = true;
    }

    std::string print_ticket() override {
        std::string status = row + " " + seatNumber;

        if(is_sold())
            status += " sold";
        else
            status += " available";

        if(beerSold)
            status += " beer";
        else
            status += " nobeer";

        return status;
    }

};

class ShowTickets {
    std::vector<Ticket> tickets;
public:
    ShowTickets() = default;
    bool is_sold(std::string row, std::string seatNumber) {
        Ticket t = tickets[isReferenced(row, seatNumber)];
        return t.is_sold();
    }

    void sell_seat(std::string row, std::string seatNumber) {
        tickets[isReferenced(row, seatNumber)].sell_seat();

    }

    std::string print_ticket(std::string row, std::string seatNumber) {
        Ticket t = tickets[isReferenced(row, seatNumber)];
        return t.print_ticket();
    }
private:
    int isReferenced(std::string row, std::string seatNumber) {
        for(int i = 0; i < tickets.size(); i++) {
            if(tickets[i].getRow() == row && tickets[i].getSeatNumber() == seatNumber) {
                return i;
            }
        }
        addTicket(row, seatNumber);
        return tickets.size() - 1;
    }

    Ticket addTicket(std::string row, std::string seatNumber) {
        Ticket t(row,seatNumber);
        tickets.push_back(t);
        return t;
    }
};

