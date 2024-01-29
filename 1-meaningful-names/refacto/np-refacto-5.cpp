#include <iostream>

class FinancialAccount {
private:
    double balance;

public:
    FinancialAccount(double initialBalance) : balance(initialBalance) {}

    void displayBalance() const {
        std::cout << "Balance: " << balance << std::endl;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        balance -= amount;
    }
};

int main() {
    FinancialAccount account(1000.0);
    account.displayBalance();

    account.deposit(500.0);
    std::cout << "After depositing 500.0:\n";
    account.displayBalance();

    account.withdraw(200.0);
    std::cout << "After withdrawing 200.0:\n";
    account.displayBalance();

    return 0;
}
