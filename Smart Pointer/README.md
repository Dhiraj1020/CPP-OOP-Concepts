# Smart Pointer

    A smart pointer is c++ object acts as a wrapper around a raw pointer and provides automatic mamory management , unlike raw pointer, smart pointers are designed to help prevent memory leaks , improve code safety and simplify memory managment. 

    Three type of smart pointer :
     
    1. unique pointer
    2. shared pointer
    3. weak pointer

#  1. unique pointer

    1. Use this for exclusive-ownership reasource management.
    2. This smart pointer represent sole ownership of dynamically allocated iobject.
    3. It ensure that there is only one "std::unique_ptr" pointing to particular reasource when the std::unique_ptr       goes out of scope ,it acutomatically delete the associated object.
    4. its take responsibility for deleting dynamiclly allocated memory.

