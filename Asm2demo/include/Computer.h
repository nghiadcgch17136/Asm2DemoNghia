#ifndef COMPUTER_H
#define COMPUTER_H
#include "Printer.h"
#include <iostream>
#include <string>
using namespace std;

class Computer
{
    public:
        Computer(string name);
        virtual ~Computer();
        void print(string file);

    protected:

    private:
        string _name;
        Printer* _printer;

};

#endif // COMPUTER_H
