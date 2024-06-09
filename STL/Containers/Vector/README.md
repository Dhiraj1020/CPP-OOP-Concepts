# Vector

    Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.





        | Vector Function       | Description |
        |-------------|-----|
        | push_back()    | Adds an element to the end of the vector.  | 
        | pop_back()  | Removes the last element of the vector. |
        | size()| Returns the number of elements in the vector.  | 
        | max_size()| Returns the maximum number of elements that the vector can hold.  | 
        | resize()| Changes the size of the vector.  | 
        | empty()| Checks if the vector is empty.  | 
        | operator[] | Accesses the element at a specific position.  | 
        | at()| Accesses the element at a specific position, with bounds checking.  | 
        | front() | Accesses the first element of the vector.|
        | back() |Accesses the last element of the vector.|
        | begin()| Returns an iterator pointing to the first element of the vector.|
        |end() | Returns an iterator pointing to the past-the-end element of the vector. |
        |rbegin() | Returns a reverse iterator pointing to the last element of the vector. |
        |rend() | Returns a reverse iterator pointing to the element preceding the first element of the vector. |
        |cbegin | Returns const_iterator to beginning  |
        |cend | Returns const_iterator to end | 
        |crbegin | Returns const_reverse_iterator to reverse beginning |
        |crend | Returns const_reverse_iterator to reverse end |
        |insert() | Inserts elements at a specific position in the vector.
        |erase() | Removes elements from a specific position or range in the vector. |
        |swap() | Swaps the contents of the vector with those of another vector. |
        |clear()  | Removes all elements from the vector. |
        |emplace()  | Constructs and inserts an element in the vector. |
        |emplace_back() | Constructs and inserts an element at the end of the vector. |
        |assign() | Assigns new values to the vector elements by replacing old ones. |
        |capacity() | Returns the size of the storage space currently allocated to the vector. |
        |reserve() | Requests that the vector capacity be at least enough to contain a specified number of elements. |
        |shrink_to_fit() | Reduces memory usage by freeing unused space. |
        |data() | Returns a direct pointer to the memory array used internally by the vector to store its owned elements.  |
        |get_allocator | Returns a copy of the allocator object associated with the vector.|