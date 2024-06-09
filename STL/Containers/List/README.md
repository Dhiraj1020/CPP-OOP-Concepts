# std::List
Lists are sequence containers that allow non-contiguous memory allocation. As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time). Normally, when we say a List, we talk about a doubly linked list. 

# List Functions

## Functions and Definitions

| Function                   | Definition                                                                                                                                |
|----------------------------|-------------------------------------------------------------------------------------------------------------------------------------------|
| `front()`                  | Returns the value of the first element in the list.                                                                                       |
| `back()`                   | Returns the value of the last element in the list.                                                                                        |
| `push_front(g)`            | Adds a new element ‘g’ at the beginning of the list.                                                                                      |
| `push_back(g)`             | Adds a new element ‘g’ at the end of the list.                                                                                            |
| `pop_front()`              | Removes the first element of the list, and reduces the size of the list by 1.                                                             |
| `pop_back()`               | Removes the last element of the list, and reduces the size of the list by 1.                                                              |
| `list::begin()`            | `begin()` function returns an iterator pointing to the first element of the list.                                                         |
| `list::end()`              | `end()` function returns an iterator pointing to the theoretical last element which follows the last element.                             |
| `list::rbegin()`           | `rbegin()` returns a reverse iterator which points to the last element of the list.                                                       |
| `list::rend()`             | `rend()` returns a reverse iterator that points to the position before the beginning of the list.                                         |
| `list::cbegin()`           | `cbegin()` returns a constant random access iterator which points to the beginning of the list.                                           |
| `list::cend()`             | `cend()` returns a constant random access iterator which points to the end of the list.                                                   |
| `list::crbegin()`          | `crbegin()` returns a constant reverse iterator which points to the last element of the list i.e. reversed beginning of the container.    |
| `list::crend()`            | `crend()` returns a constant reverse iterator which points to the theoretical element preceding the first element in the list.            |
| `empty()`                  | Returns whether the list is empty(1) or not(0).                                                                                           |
| `insert()`                 | Inserts new elements in the list before the element at a specified position.                                                              |
| `erase()`                  | Removes a single element or a range of elements from the list.                                                                            |
| `assign()`                 | Assigns new elements to the list by replacing current elements and resizing the list.                                                     |
| `remove()`                 | Removes all the elements from the list, which are equal to a given element.                                                               |
| `list::remove_if()`        | Used to remove all the values from the list that correspond true to the predicate or condition given as a parameter to the function.      |
| `reverse()`                | Reverses the list.                                                                                                                        |
| `size()`                   | Returns the number of elements in the list.                                                                                               |
| `list::resize()`           | Used to resize a list container.                                                                                                          |
| `sort()`                   | Sorts the list in increasing order.                                                                                                       |
| `list::max_size()`         | Returns the maximum number of elements a list container can hold.                                                                         |
| `list::unique()`           | Removes all duplicate consecutive elements from the list.                                                                                 |
| `list::emplace_front()`    | `.emplace_front()` function is used to insert a new element into the list container and constructs the object in-place at the beginning of the list.|
| `list::emplace_back()`     | `.emplace_back()` function is used to insert a new element into the list container, and constructs the object in-place at the end of the list.|
| `list::clear()`            | `clear()` function is used to remove all the elements of the list container, thus making it size 0.                                       |
| `list::operator=`          | This operator is used to assign new contents to the container by replacing the existing contents.                                         |
| `list::swap()`             | This function is used to swap the contents of one list with another list.                                                                 |
| `list::splice()`           | Used to transfer elements from one list to another.                                                                                       |
| `list::merge()`            | Merges two sorted lists into one.                                                                                                         |
| `list::emplace()`          | Extends the list by inserting a new element at a given position and it constructs the object in-place at the beginning of the list, potentially improving performance by avoiding a copy operation. |


**Points to Remember about List Container **
It is generally implemented using a dynamic doubly linked list with traversal in both directions.
Faster insert and delete operation as compared to arrays and vectors.
It provides only sequential access. Random Access to any middle element is not possible
It is defined as a template so it is able to hold any data type.
It operates as an unsorted list would, which implies that by default, the list’s order is not preserved. However, there are techniques for sorting.