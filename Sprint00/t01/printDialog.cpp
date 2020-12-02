#include <iostream>

void printDialog(const std::string& name, const std::string& sentence)
{
    std::cout << name << " says: " << '"' << sentence << '"' << std::endl;
}

int main()
{
    printDialog("", "");
    printDialog("Gurad", "I used to be an adventurer like you. Then I took an arrow in the knee...");
    printDialog("", "I used to be an adventurer like you. Then I took an arrow in the knee...");
    printDialog("Gurad", "");
}
