#include <iostream>

class Sales_item{
public:
    double avg_price() const;
    bool same_isbn(const Sales_item &rhs)const{
        return isbn==rhs.isbn;
    }
    Sales_item():units_sold(0),revenue(0.0) {}

private:
    std::string isbn;
    unsigned units_sold;
    double revenue;
};
double Sales_item::avg_price() const {
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}
