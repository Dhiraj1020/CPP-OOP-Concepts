#include <iostream>

class Person
{
    private:
    int x{10};
    public:
    Person()
    {
        std::cout << "i am person" << std::endl;
    }

    Person(int _x):x(_x)
    {
        std::cout << "i am person" << std::endl;
    }

     ~Person()
    {
        std::cout << "i am destructor Person" << std::endl;
    }

    virtual void print()
     { 
        std::cout << x;
         }
};

class virus : virtual public Person
{
public:
    virus() : Person(20)
    {
        std::cout << "i am virus" << std::endl;
    }

    // void print()
    //  { 
    //     std::cout << "20";
    //      }

     ~virus()
    {
        std::cout << "i am destructor virus" << std::endl;
    }
};

class engineer : virtual public Person
{
public:
    engineer() : Person(30)
    {
        std::cout << "i am engineer" << std::endl;
    }

    // void print()
    //  { 
    //     std::cout << "30";
    //     }

     ~engineer()
    {
        std::cout << "i am destructor engineer" << std::endl;
    }
};


class rancho: public virus,public engineer
{
public:
    rancho()
    {
        std::cout << "i am rancho" << std::endl;
    }

    ~rancho()
    {
        std::cout << "i am destrcor rancho" << std::endl;
    }
};

int main(void)
{
    rancho obj;
    obj.print();//error
    return 0;
}

//i am person
// i am virus
// i am person
// i am engineer
// i am rancho
// i am destrcor rancho
// i am destructor engineer
// i am destructor Person
// i am destructor virus
// i am destructor Person


//
//