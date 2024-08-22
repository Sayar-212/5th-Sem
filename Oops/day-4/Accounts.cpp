#include <iostream>
using namespace std;
class Account {
private:
    int accountNumbers[10];
    double balances[10];
    int numAccounts;
public:
    Account(): numAccounts(0) {}
    void addAcc(int accountNumber, double balance) {
        if (numAccounts < 10) {
            accountNumbers[numAccounts] = accountNumber;
            balances[numAccounts] = balance;
            numAccounts++;
        }
    }
    void displayAccounts() const {
        for (int i = 0; i < numAccounts; i++) {
            cout << "Account Number: " << accountNumbers[i] << ", Balance: $" << balances[i] << endl;
        }
    }
    void transfer_by_Object(Account obj, int from, int to, double amount) {
        int fromIndex = findAccountIndex(obj, from);
        int toIndex = findAccountIndex(obj, to);
        if (fromIndex != -1 && toIndex != -1 && obj.balances[fromIndex] >= amount) {
            obj.balances[fromIndex] -= amount;
            obj.balances[toIndex] += amount;
            cout << "Transfer successful using object by value.\n";
        } else {
            cout << "Transfer failed!\n";
        }
    }
    void transfer_By_Address(Account* obj, int from, int to, double amount) {
        int fromIndex = findAccountIndex(*obj, from);
        int toIndex = findAccountIndex(*obj, to);
        if (fromIndex != -1 && toIndex != -1 && obj->balances[fromIndex] >= amount) {
            obj->balances[fromIndex] -= amount;
            obj->balances[toIndex] += amount;
            cout << "Transfer successful using object by address.\n";
        } else {
            cout << "Transfer failed!\n";
        }
    }
    void transfer_By_Reference(Account& obj, int from, int to, double amount) {
        int fromIndex = findAccountIndex(obj, from);
        int toIndex = findAccountIndex(obj, to);
        if (fromIndex != -1 && toIndex != -1 && obj.balances[fromIndex] >= amount) {
            obj.balances[fromIndex] -= amount;
            obj.balances[toIndex] += amount;
            cout << "Transfer successful using object by reference.\n";
        } else {
            cout << "Transfer failed!\n";
        }
    }
private:
    int findAccountIndex(const Account& obj, int accountNumber) const {
        for (int i = 0; i < obj.numAccounts; i++) {
            if (obj.accountNumbers[i] == accountNumber) {
                return i;
            }
        }
        return -1;
    }
};
int main() {
    Account account1;
    int numAccounts;
    cout << "Enter the number of accounts you want to create (max 10): ";
    cin >> numAccounts;
    for (int i = 0; i < numAccounts; i++) {
        int accNumber;
        double balance;
        cout << "Enter account number for account " << (i + 1) << ": ";
        cin >> accNumber;
        cout << "Enter balance for account " << (i + 1) << ": ";
        cin >> balance;
        account1.addAcc(accNumber, balance);
    }
    cout << "\nInitial account details:\n";
    account1.displayAccounts();
    for (int i = 0; i < 3; i++) {
        int from, to;
        double amount;
        cout << "\nTransfer " << (i + 1) << ":\n";
        cout << "Enter account number to transfer from: ";
        cin >> from;
        cout << "Enter account number to transfer to: ";
        cin >> to;
        cout << "Enter amount to transfer: ";
        cin >> amount;
        if (i == 0) {
            account1.transfer_by_Object(account1, from, to, amount);
        } else if (i == 1) {
            account1.transfer_By_Address(&account1, from, to, amount);
        } else {
            account1.transfer_By_Reference(account1, from, to, amount);
        }
        cout << "\nAccount details after transfer " << (i + 1) << ":\n";
        account1.displayAccounts();
    }
    return 0;
}
