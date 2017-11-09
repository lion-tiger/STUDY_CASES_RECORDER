
class Account{
public:
    void applyint(){}
    static double rate(){return interestRate;}
    static void rate(double);
private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
}
