#include "Computer.h"
#include "Printer.h"
#include <string>
#include <iostream>
using namespace std;
Computer::Computer(string name)
{
    //ctor
    _name = name;
    _printer = Printer::getPrint();
}

Computer::~Computer()
{
    //dtor
}
void Computer::print(string file)
{
    cout<< _name << " connects to a printer " << endl;
    _printer->print(file);

}
