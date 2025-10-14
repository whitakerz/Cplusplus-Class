// #include <iostream>
// #include <string>
// using namespace std;
//
// class BankAccount {
// private:
//     int accountNumber;
//     double balance;
//     string accountHolder;
//
// public:
//     BankAccount() {
//         accountNumber = 0;
//         balance = 0.0;
//         accountHolder = "";
//     }
//
//     BankAccount(int accNum, double bal, string holder) {
//         accountNumber = accNum;
//         balance = bal;
//         accountHolder = holder;
//     }
//
//     ~BankAccount() {
//         cout << "Bank account object destroyed." << endl;
//     }
//
//     void deposit(double amount) {
//         balance += amount;
//     }
//
//     void withdraw(double amount) {
//         if (amount <= balance) {
//             balance -= amount;
//             cout << "Withdrew: " << amount << ". Remaining balance: " << balance << endl;
//         } else {
//             cout << "Insufficient funds. Balance: " << balance << endl;
//         }
//     }
//
//     double getBalance() {
//         return balance;
//     }
// };
//
// int main() {
//     BankAccount account1(123456789, 1000.00, "John Doe");
//     account1.deposit(100.00);
//     cout << "Your balance is: " << account1.getBalance() << endl;
//     account1.withdraw(50.00);
// }
