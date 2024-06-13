#include <iostream>

class CUserDetails
{
    std::string m_UserData;
    int         m_iID;

    public:
    CUserDetails()
    {
        std::cout << "Call to Default constrctor" << std::endl; 
        m_UserData = "";
        m_iID = -1;
    }

    CUserDetails(std::string t_UserName , int t_iID)
    {
        std::cout << "Call to Paramterize constrctor" << std::endl; 
        m_UserData = t_UserName;
        m_iID = t_iID;
    }

    CUserDetails(const CUserDetails& t_other)
    {
        std::cout << "Call to copy constrctor" << std::endl; 
        this->m_iID = t_other.m_iID;
        this->m_UserData = t_other.m_UserData;
    }

    CUserDetails& operator=(const CUserDetails& t_other)
    {
         std::cout << "Call to copy assignment" << std::endl; 
        this->m_iID = t_other.m_iID;
        this->m_UserData = t_other.m_UserData;
        return *this;
    }

    std::string GetUserName()
    {
        return m_UserData;
    }

    int GetId()
    {
        return m_iID;
    }

    ~CUserDetails()
    {
        std::cout << "Call to Destructor" << std::endl; 
    }
};


void PrintData(CUserDetails& t_Obj)
{
    std::cout << "User name : " << t_Obj.GetUserName() << "ID : " << t_Obj.GetId()  << std::endl;
}

int main(void)
{
    CUserDetails obj("Dhiraj" , 10);

    

    PrintData(obj);

    CUserDetails obj2(obj);

    PrintData(obj2);

    CUserDetails obj3;

    obj3 = obj2;

    PrintData(obj3);

    return 0;
}

