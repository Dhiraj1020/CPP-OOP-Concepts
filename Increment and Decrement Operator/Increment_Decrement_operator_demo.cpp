#include <iostream>
#include <ostream>

class WholeNumber
{
    private:
    unsigned int m_iNumber;

    public:
    WholeNumber() : m_iNumber(0)
    {

    }

    WholeNumber(int t_iData) : m_iNumber(t_iData)
    {

    }

    //pre_increment
    WholeNumber& operator++()
    {
        std::cout << "pre_increment" << std::endl;
        m_iNumber+=1;
        return *this;
    }

    //post-increment
    WholeNumber operator++(int)
    {
        std::cout << "post-increment" << std::endl;
        WholeNumber obj = *this;
        m_iNumber+=1;
        return obj;
    }

    WholeNumber& operator--()
    {
        std::cout << "pre_decrement" << std::endl;
        m_iNumber-=1;
        return *this;
    }

    WholeNumber operator--(int)
    {
        std::cout << "post-decrement" << std::endl;
        WholeNumber obj = *this;
        m_iNumber-=1;
        return obj;
    }

    friend std::ostream& operator <<(std::ostream &out , const WholeNumber& c);
};

std::ostream& operator <<(std::ostream &out , const WholeNumber& c)
{
    out << c.m_iNumber;
    return out;
}

int main()
{
    WholeNumber Number(5);

    std::cout << Number << std::endl;
    std::cout << ++Number << std::endl;
    std::cout << Number << std::endl;

}

/*
OUTPUT : 
5
post-increment
5
6


 -----------
5
pre_increment
6
6

*/