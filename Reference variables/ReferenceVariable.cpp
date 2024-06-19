#include <iostream>

class Demo
{
    public:
    int &iRef;
};

void FuntionPram(int& iRef)
{
    iRef = 20;
    std::cout << "Address of iRef in FuntionPram= " << &iRef << std::endl;
}

int& func() {
    int x = 70;
    return x; // Dangerous: returning reference to local variable
}

int main(void)
{
    std::cout << "size of reference variable in class  : " << sizeof(Demo) << std::endl;

    // int &DummyRef = nullptr; // compile time error //initial value of reference to non-const must be an lvalue

    int i = 10;
    int &iRef = i;

    std::cout << "i = " << i << std::endl;
    std::cout << "iRef = " << iRef << std::endl;  

    std::cout << "Address of i = " << &i << std::endl;
    std::cout << "Address of iRef = " << &iRef << std::endl;

    FuntionPram(iRef);

    std::cout << "iRef after function call = " << iRef << std::endl;
    std::cout << "Address of iRef after function call = " << &iRef << std::endl;

    std::cout << "size of i = " << sizeof(i) << std::endl;
    std::cout << "size of iRef = " << sizeof(iRef) << std::endl;

    char c = 'D';
    char &cRef = c;

    std::cout << "c = " << c << std::endl;
    std::cout << "cRef = " << cRef << std::endl;  

    std::cout << "Address of c = " << &c << std::endl;
    std::cout << "Address of cRef = " << &cRef << std::endl;

    std::cout << "size of c : " << sizeof(c) << std::endl;
    std::cout << "size of cRef : " << sizeof(cRef) << std::endl;

    //int& ref = func(); // ref is now a dangling reference
    //std::cout << "ref = " << ref << std::endl; //Segmentation fault
    //std::cout << "size of ref : " << sizeof(ref) << std::endl;

    //int &tRef; // required initilizer -- compile time error
    //tRef = i;
}


/*
output : 

size of reference variable in class  : 8
i = 10
iRef = 10
Address of i = 0x5ffe8c
Address of iRef = 0x5ffe8c
Address of iRef in FuntionPram= 0x5ffe8c
iRef after function call = 20
Address of iRef after function call = 0x5ffe8c
size of i = 4
size of iRef = 4
c = D
cRef = D
Address of c = D
Address of cRef = D
size of c : 1
size of cRef : 1

*/