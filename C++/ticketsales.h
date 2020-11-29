// ShowTicket class
#include<string>

class ShowTicket {
    bool isSold;
protected:
    std::string row;
    std::string seatNumber;
public:
    ShowTicket(std::string row, std::string seatNumber){
        this -> row = row;
        this -> seatNumber = seatNumber;
        isSold = false;
    };

    ShowTicket() { isSold = false; }

    bool is_sold() { return isSold; }

    void sell_seat() { isSold = true; }

    virtual std::string print_ticket() {
        std::string status = row + " " + seatNumber;
        if(is_sold())
            status += " sold";
        else
            status += " available";

        return status;
    }
};

class SportTicket :public ShowTicket {
    bool beerSold;
public:
    SportTicket(std::string row, std::string seatNumber)
    : ShowTicket (row, seatNumber)
    {
        beerSold = false;
    }

    bool beer_sold() { return beerSold; }

    void sell_beer() { beerSold = true; }

    std::string print_ticket() override {
        std::string status = row + " " + seatNumber;
        
        if(is_sold())
            status += " sold";
        else
            status += " available";

        if(beer_sold())
            status += " beer";
        else
            status += " nobeer";

        return status;
    }

};

class TicketSales{
public:
    std::string print_ticket(ShowTicket *myticket){
        return myticket -> print_ticket();
    }

};

