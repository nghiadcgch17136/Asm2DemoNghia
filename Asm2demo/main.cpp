#include <iostream>
#include "Computer.h"
#include "Printer.h"
#include <string>
using namespace std;

int main()
{
    Computer c1("Computer 1");
    c1.print("file1");
    Computer c2("Computer 2");
    c2.print("File2");
    return 0;
}
