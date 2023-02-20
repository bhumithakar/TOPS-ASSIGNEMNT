/*Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/

#include <iostream>
using namespace std;
class bank
{
    string name;
    int AC_number;
    string AC_type;
    int balance;
    int Update_balance;
    int update_balance1;

public:
    void Value()
    {
        cout << "Name of the Dipositor:" << endl;
        getline(cin, name);
        cout << "Account Number:" << endl;
        cin >> AC_number;
        cout << "Type of Account:" << endl;
        cin.ignore();
        getline(cin, AC_type);
        cout << "Balance amount in the Account:" << endl;
        cin >> balance;
    }

    int diposit1;
    void diposit()
    {
        cout << "Before deposite, your account balance is:" << balance << endl;
        cout << "the deposit amount is:";
        cin >> diposit1;
        cout << "After Deposite " << diposit1 << "Rs. The Balance Is " << diposit1 + balance << endl;
        balance = balance + diposit1;
        cout << balance;
    }

    int Withdrow1;
    void Withdrow()
    {
        cout << "Before withdraw, your account balance is:" << balance << endl;
        cout << "the withdraw amount is: ";
        cin >> Withdrow1;
        balance = balance - Withdrow1;
        cout << "After withdraw " << Withdrow1 << "Rs. the balance is " << balance;
    }

    void print_value()
    {
        cout << " Represent A Bank Account" << endl;
        cout << "Name of the Dipositor: " << name << endl;
        cout << "Account Number: " << AC_number << endl;
        cout << "Type of Account: " << AC_type << endl;
        cout << "Balance amount in the Account: " << balance << endl;
    }
};

int main()
{
    bank o1;
    o1.Value();
    o1.diposit();
    o1.Withdrow();
    o1.print_value();
    return 0;
}