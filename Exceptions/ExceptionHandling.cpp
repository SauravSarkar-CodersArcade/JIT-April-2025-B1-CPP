#include <iostream>
using namespace std;
class Printer {
public:
    string _name;
    int _availablePaper;
    Printer(string name, int paper){
        _name = name;
        _availablePaper = paper;
    }
    void PrintDocument(string txtDocument){
        int requiredPaper = txtDocument.length() / 10;
        if (requiredPaper > _availablePaper){
            // throw 404;
            throw "Printer is out of paper.";
        }
        cout << "Printing....!!! " << txtDocument << endl;
        _availablePaper -= requiredPaper;
    }

};
int main() {
    Printer myPrinter("HP-Laser-Jet-2050ti", 10);
    try {
        myPrinter.PrintDocument("Rahul is a Software Developer.");
        myPrinter.PrintDocument("Kaushal is a Data Analyst.");
        myPrinter.PrintDocument("Khushi is a Web Developer.");
        myPrinter.PrintDocument("Hari is a Data Scientist.");
        myPrinter.PrintDocument("Chethan is a Software Developer.");
    }catch (int errorCode){
        cout << errorCode << " Printer is out of paper...!!!" << endl;
    } catch (const char * txtException) {
        cout << "Error: " << txtException << endl;
    } catch (...) {
        cout << "Something unexpected happened..!!" << endl;
    }
    cout << myPrinter._availablePaper << endl;
    return 0;
}
