#include <iostream>
#include "LegalPerson.h"
#include "IndividualPerson.h"
#include "Person.h"

using namespace std;

int main() {
    LegalPerson p1("(18)991710648", "123456789", "17.195.932.0001-30");
    IndividualPerson p2("Developer", "10/05/2004", "Carlos", "Denise", "63.143.522-0", "530.355.118-02");
    Person p3("Das rosas", 2125, "Barbieri", "16202.665", "Birigui", "215585", "Leonardo", "(18)997449933", "Full stack", "24/04/2004", "God", "Ana");

    cout << p1.getContact() << endl;
    cout << p2.getFathersCity("Birigui") << endl;
    cout << p3.getPersonAddress().getCityName() << endl;

    return 0;
}

