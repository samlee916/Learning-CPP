#include <iostream>

using namespace std;

//class definition
class BankAccount {
    private:
        float balance;

    public:
        BankAccount();
    void Deposit(float);
    void WithDrawl();
    float getBalance();

};

//default constructor, gets executed when an instance
//of the class gets created, just initializes the balance to 0
BankAccount::BankAccount() {
    balance = 0;
}
//function to return the balance since the access specifier
//for attributes should be private
float BankAccount::getBalance() {
    return balance;
}

//function to add a deposit to my balance
void BankAccount::Deposit(float dep) {
    balance = balance + dep;
}

int main() {
    BankAccount checking;
    BankAccount savings;
    cout << "Checking balance is: " << checking.getBalance() << endl;
    cout << "Savings balance is: " << savings.getBalance() << endl;

    //add a deposit to my classes
    checking.Deposit(100);
    savings.Deposit(500);

    //print again, getting the balance through the getBalance function
    cout << "Checking balance is: " << checking.getBalance() << endl;
    cout << "Savings balance is: " << savings.getBalance() << endl;

    return 0;

}
