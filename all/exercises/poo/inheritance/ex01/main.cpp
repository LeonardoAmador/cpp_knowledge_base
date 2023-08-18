#include <iostream>
#include <string>
#include "Account.h"
#include "SpecialAccount.h"

using namespace std;

int main() {
    Account account1("Leonardo Amador", "2157432", 1500);

    account1.deposit(233);
    account1.remove(1243);
    cout << account1.checkBalance() << endl;

    SpecialAccount account2("Ayxa Thiel", "9785346", 200, 1500);

    account2.deposit(100);
    account2.remove(1300);
    account2.deposit(300);
    cout << account2.checkBalance() << endl;

    return 0;
}
