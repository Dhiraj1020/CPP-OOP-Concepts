# std::set
Sets are a type of associative container in which each element has to be unique because the value of the element identifies it. The values are stored in a specific sorted order i.e. either ascending or descending.

# Functions of `std::set`

## Functions and Descriptions

| Function                                     | Description                                                                                                           |
|----------------------------------------------|-----------------------------------------------------------------------------------------------------------------------|
| `begin()`                                    | Returns an iterator to the first element in the set.                                                                  |
| `end()`                                      | Returns an iterator to the theoretical element that follows the last element in the set.                             |
| `rbegin()`                                   | Returns a reverse iterator pointing to the last element in the container.                                              |
| `rend()`                                     | Returns a reverse iterator pointing to the theoretical element right before the first element in the set container.   |
| `crbegin()`                                  | Returns a constant iterator pointing to the last element in the container.                                              |
| `crend()`                                    | Returns a constant iterator pointing to the position just before the first element in the container.                  |
| `cbegin()`                                   | Returns a constant iterator pointing to the first element in the container.                                             |
| `cend()`                                     | Returns a constant iterator pointing to the position past the last element in the container.                            |
| `size()`                                     | Returns the number of elements in the set.                                                                            |
| `max_size()`                                 | Returns the maximum number of elements that the set can hold.                                                          |
| `empty()`                                    | Returns whether the set is empty.                                                                                     |
| `insert(const g)`                           | Adds a new element ‘g’ to the set.                                                                                    |
| `insert(iterator position, const g)`        | Adds a new element ‘g’ at the position pointed by the iterator.                                                        |
| `erase(iterator position)`                  | Removes the element at the position pointed by the iterator.                                                           |
| `erase(const g)`                            | Removes the value ‘g’ from the set.                                                                                   |
| `clear()`                                   | Removes all the elements from the set.                                                                                |
| `key_comp()` / `value_comp()`               | Returns the object that determines how the elements in the set are ordered (‘<‘ by default).                         |
| `find(const g)`                             | Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to the end.                     |
| `count(const g)`                            | Returns 1 or 0 based on whether the element ‘g’ is present in the set or not.                                          |
| `lower_bound(const g)`                      | Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’.   |
| `upper_bound(const g)`                      | Returns an iterator to the first element that will go after the element ‘g’ in the set.                                |
| `equal_range()`                             | Returns an iterator of pairs referring to the range that includes all the elements in the container with a key equivalent to k. (key_comp) |
| `emplace()`                                 | Inserts a new element into the set container if it is unique and does not already exist.                              |
| `emplace_hint()`                            | Returns an iterator pointing to the position where the insertion is done or where the existing element is.            |
| `swap()`                                    | Exchanges the contents of two sets of the same type, although sizes may differ.                                       |
| `operator=`                                 | Copies or moves a set to another set.                                                                                  |
| `get_allocator()`                           | Returns the copy of the allocator object associated with the set.                                                      |


***

# Set vs. Unordered Set

| Set                             | Unordered Set                                     |
|---------------------------------|---------------------------------------------------|
| Stores elements in a sorted order | Stores elements in an unsorted order            |
| Stores/acquires unique elements only | Stores/acquires only unique values             |
| Uses Binary Search Trees for implementation | Uses Hash Tables for implementation            |
| More than one element can be erased by giving the starting and ending iterator | Can erase the element for which the iterator position is given |
| `set<datatype> Set_Name;`      | `unordered_set<datatype> UnorderedSet_Name;`    |

