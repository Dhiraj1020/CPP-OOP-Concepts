#include<iostream>

template<typename T>
class CUniqurPtr
{
    private:
        T* m_ptr;
    
    public:
    CUniqurPtr(T* t_ptr) : m_ptr(t_ptr)
    {

    }

    ~CUniqurPtr()
    {
        delete m_ptr;
        m_ptr = nullptr;
    }

    //delete copy constructor and copy assignment
    CUniqurPtr(const CUniqurPtr<T>&) = delete;
    CUniqurPtr<T>& operator=(const CUniqurPtr<T>&) = delete;

    //Move constructor
    CUniqurPtr(CUniqurPtr<T>&& t_other) : m_ptr(t_other.m_ptr)
    {
        t_other = nullptr;
    }

    //move assignment operator
    CUniqurPtr<T>& operator=(CUniqurPtr<T>&& t_other)
    {
        if(this != &t_other)
        {
            delete m_ptr;
            m_ptr = t_other.m_ptr;
            t_other.m_ptr = nullptr;
        }

        return *this;
    }

    void operator=(std::nullptr_t x)
    {
        delete m_ptr;
        m_ptr = nullptr;
    } 

    T& operator*() const
    {
        return *m_ptr;
    }

    T* operator->() const
    {
        return m_ptr;
    }

    T* release()
    {
        T* oldPtr = m_ptr;
        m_ptr = nullptr;
        return oldPtr;
    }

    void reset(T* ptr = nullptr)
    {
        delete m_ptr;
        m_ptr = ptr;
    }

    T* get() const
    {
        return m_ptr;
    }
};


//**************************************testing*************************************************************

class Test {
public:
    Test() {
        std::cout << "Test object created.\n";
    }
    ~Test() {
        std::cout << "Test object destroyed.\n";
    }
    void greet() const {
        std::cout << "Hello from Test object!\n";
    }
};

int main(void)
{
    CUniqurPtr<Test> ptr1(new Test());
    ptr1->greet();
    std::cout << "Pointer ptr1 is pointing to: " << ptr1.get() << "\n";

    CUniqurPtr<Test> ptr2 = std::move(ptr1);
    if (!ptr1.get()) {
        std::cout << "Pointer ptr1 is now null after move.\n";
    }
    ptr2->greet();
    std::cout << "Pointer ptr2 is pointing to: " << ptr2.get() << "\n";

    ptr2.reset(new Test());
    ptr2->greet();

    Test* rawPtr = ptr2.release();
    std::cout << "Pointer ptr2 is now null after release.\n";
    if (!ptr2.get()) {
        std::cout << "Pointer ptr2 is null.\n";
    }
    delete rawPtr;

    CUniqurPtr<Test> ptr3(new Test());
    ptr3 = nullptr;

    return 0;
}