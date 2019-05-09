#ifndef PRINTER_H
#define PRINTER_H
#include <iostream>
#include <string>
using namespace std;

class Printer
{
    public:
        virtual ~Printer();
        static Printer* getPrint();
        void print(string filename);
    protected:
        Printer(string name);
    private:
        static string _name;
        static Printer* _instance;
};

#endif // PRINTER_H
