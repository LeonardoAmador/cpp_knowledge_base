#include <string>

using namespace std;

class Animal {
public:
    Animal(string type, string color);
    string showTypeColor();
    string getColor();
    bool validateStringType();

private:
    string type;
    string color;
};

#endif

