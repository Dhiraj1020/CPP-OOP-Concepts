#include <iostream>
#include <string>

// class AllInOnePrinter {
// public:
//     virtual void printDocument(const std::string& doc) = 0;
//     virtual void scanDocument(const std::string& doc) = 0;
// };

// class BasicPrinter : public AllInOnePrinter {
// public:
//     void printDocument(const std::string& doc) override {
//         std::cout << "Printing: " << doc << std::endl;
//     }

//     void scanDocument(const std::string& doc) override {
//         // BasicPrinter doesn't support scanning, violates ISP
//     }
// };

// int main() {
//     BasicPrinter printer;
//     printer.printDocument("Hello, World!");

//     return 0;
// }

//Explanation: BasicPrinter is forced to implement scanDocument, which it does not support, violating ISP.


class Printer {
public:
    virtual void printDocument(const std::string& doc) = 0;
};

class Scanner {
public:
    virtual void scanDocument(const std::string& doc) = 0;
};

class MultiFunctionPrinter : public Printer, public Scanner {
public:
    void printDocument(const std::string& doc) override {
        std::cout << "Printing: " << doc << std::endl;
    }

    void scanDocument(const std::string& doc) override {
        std::cout << "Scanning: " << doc << std::endl;
    }
};

class SimplePrinter : public Printer {
public:
    void printDocument(const std::string& doc) override {
        std::cout << "Printing: " << doc << std::endl;
    }
};

int main() {
    SimplePrinter printer;
    printer.printDocument("Hello, World!");

    return 0;
}

//Explanation: We separate Printer and Scanner interfaces. 
//SimplePrinter implements only the Printer interface, adhering to ISP.