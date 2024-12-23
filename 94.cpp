/* 5.WAP to stimulate an online purchase. 
If the credit card number is invalid or the balance is insufficient, 
throw an exceptions for each and handle thm in seprate catch blocks */
#include <iostream>
#include <string>
using namespace std;

class Shopping {
public:
    long balance=9999;



    // Method to withdraw money
    void withdraw(double amount) {
        try {
            if (amount < 0) {
                throw -1; // Throw an integer for negative input
            }
            if (amount > balance) {
                throw string("Error: Insufficient balance."); // Throw a string for insufficient funds
            }
            balance -= amount; // Deduct the amount
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        } catch (int) { // Catch negative amounts
            cout << "Error: Enter a positive amount to withdraw." << endl;
        } catch (string) { // Catch insufficient balance
            cout << "Error: Insufficient balance." << endl;
        }
    }

    // Method to get the current balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    double withdrawal_amount, card_number,dcard_number;
    card_number=1234;

    cout<<"Enter Debit card number: ";
    cin>>dcard_number;
    try{
    if(dcard_number!=card_number){
        throw "invalid";
    }
    else{
        cout<<"Access granted"<<endl;
    }
    }
    catch(string){
        cout<<"Invalid card number";
    }

    cout << "Enter amount to withdraw: ";
    cin >> withdrawal_amount;
    Shopping account;

    account.withdraw(withdrawal_amount); // Attempt to withdraw

    return 0;
}
