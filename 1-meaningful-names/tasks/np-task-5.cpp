#include <iostream>

class Account {
public:
    double bal;

    Account(double b) {
        bal=b;
    }

    void dispBalance() {
        std::cout<<"Balance: "<<bal<<std::endl;
    }

    void deposit(double amt) {
        bal+=amt;
    }

    void withdraw(double amt) {
        bal-=amt;
    }
};

int main() {
    Account acc(1000.0);
    acc.dispBalance();

    acc.deposit(500.0);
    std::cout<<"After depositing 500.0:\n";
    acc.dispBalance();

    acc.withdraw(200.0);
    std::cout<<"After withdrawing 200.0:\n";
    acc.dispBalance();

    return 0;
}
