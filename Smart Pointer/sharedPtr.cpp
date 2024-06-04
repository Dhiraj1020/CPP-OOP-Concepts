#include<iostream>

namespace DSF
{
    template<typename T>
    class CSharedPtr;

    template <typename T>
    class CWrapperPointer
    {
        T* m_ptr;
        unsigned int m_rc;
        friend class CSharedPtr<T>;

        CWrapperPointer(T* t_ptr) :
            m_ptr(t_ptr),
            m_rc(1)
        {
        }

        ~CWrapperPointer()
        {
            delete m_ptr;
            m_ptr = nullptr;
            std::cout << "Memory Freed" << std::endl; 
        }
    };

    template<typename T>
    class CSharedPtr
    {
        CWrapperPointer<T>* m_pCWrapperPointer;
        public:
            CSharedPtr(T* ptr) : m_pCWrapperPointer(new CWrapperPointer<T>(ptr))
            {

            }

            ~CSharedPtr()
            {
                if(--this->m_pCWrapperPointer->m_rc == 0)
                {
                    delete m_pCWrapperPointer;
                    m_pCWrapperPointer = nullptr;
                }
            }

            CSharedPtr(const CSharedPtr<T>& t_other)
            {
                this->m_pCWrapperPointer = t_other.m_pCWrapperPointer;
                this->m_pCWrapperPointer->m_rc += 1;
            }

            CSharedPtr<T>& operator=(const CSharedPtr<T>& t_other)
            {
                if(--this->m_pCWrapperPointer->m_rc == 0)
                {
                    delete m_pCWrapperPointer;
                    m_pCWrapperPointer = nullptr;
                }

                this->m_pCWrapperPointer = t_other.m_pCWrapperPointer;
                this->m_pCWrapperPointer->m_rc += 1;
                return *this;
            }

            unsigned int GetRefCount() const
            {
                return this->m_pCWrapperPointer->m_rc;
            }

            T* Get()
            {
                return this->m_pCWrapperPointer->m_ptr;
            }

            T& operator*()
            {
                return *this->m_pCWrapperPointer->m_ptr;
            }

            T* operator->()
            {
                return this->m_pCWrapperPointer->m_ptr;
            }

            void swap(CSharedPtr<T>& t_other)
            {
                CWrapperPointer<T>* temp;

                temp = m_pCWrapperPointer;
                m_pCWrapperPointer = t_other;
                t_other = temp;
            }
    };
}





//*************************************testing***************************************************************

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
    DSF::CSharedPtr<Test> ptr1(new Test());

    ptr1->greet();
    std::cout << "ptr1 ref cound : " << ptr1.GetRefCount() << std::endl;

    
    DSF::CSharedPtr<Test> ptr2(ptr1);

    ptr2->greet();

    std::cout << "ptr1 ref cound : " << ptr1.GetRefCount() << std::endl;
    std::cout << "ptr2 ref cound : " << ptr2.GetRefCount() << std::endl;

    DSF::CSharedPtr<Test> ptr3(ptr1);

    std::cout << "ptr1 ref cound : " << ptr1.GetRefCount() << std::endl;
    std::cout << "ptr2 ref cound : " << ptr2.GetRefCount() << std::endl;
    std::cout << "ptr3 ref cound : " << ptr3.GetRefCount() << std::endl;

    ptr3 = ptr2;

    std::cout << "ptr1 ref cound : " << ptr1.GetRefCount() << std::endl;
    std::cout << "ptr2 ref cound : " << ptr2.GetRefCount() << std::endl;
    std::cout << "ptr3 ref cound : " << ptr3.GetRefCount() << std::endl;

}