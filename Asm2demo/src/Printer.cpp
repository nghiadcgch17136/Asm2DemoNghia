#include "Printer.h"
#include <iostream>
#include <string>
using namespace std;
Printer* Printer::_instance = 0;
string Printer::_name = "";
Printer::Printer(string name)
{
    //ctor
    _name = name;
}

Printer::~Printer()
{
    //dtor
}
Printer* Printer::getPrint()
{
    if (_instance == 0 )
    {
        string printername;
        cout << "Enter printer name: ";
        cin >> printername;
        _instance = new Printer(printername);
    }
    return _instance;
}
void Printer::print(string filename)
{
    cout << _name <<" prints " << filename << endl;
}
