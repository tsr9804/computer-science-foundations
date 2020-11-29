// ShowTicket class
#include<string>
#include <utility>

class ShowTicket {
    std::string row;
    std::string seatNumber;
    bool isSold;
public:
    ShowTicket(std::string row, std::string seatNumber) : row(std::move(row)), seatNumber(std::move(seatNumber)), isSold(false){};
    bool is_sold() const { return isSold; }
    void sell_seat() { isSold = true; }

    std::string print_ticket() {
        if(isSold)
            return row + " " + seatNumber + " sold";
        else
            return row + " " + seatNumber + " available";
    }
};

