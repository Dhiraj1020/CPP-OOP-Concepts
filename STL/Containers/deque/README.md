# std::Deque
Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed. 
Double Ended Queues are basically an implementation of the data structure double-ended queue. A queue data structure allows insertion only at the end and deletion from the front. This is like a queue in real life, wherein people are removed from the front and added at the back. Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.

# Methods of Deque

## Methods and Definitions

| Method                                 | Definition                                                                                                                                                |
|----------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------|
| **`deque::insert()`**                  | Inserts an element. Returns an iterator that points to the first of the newly inserted elements.                                                          |
| **`deque::rbegin()`**                  | Returns a reverse iterator which points to the last element of the deque (i.e., its reverse beginning).                                                   |
| **`deque::rend()`**                    | Returns a reverse iterator which points to the position before the beginning of the deque (considered its reverse end).                                    |
| **`deque::cbegin()`**                  | Returns a constant iterator pointing to the first element of the container, that is, the iterator cannot be used to modify, only traverse the deque.      |
| **`deque::max_size()`**                | Returns the maximum number of elements that a deque container can hold.                                                                                   |
| **`deque::assign()`**                  | Assigns values to the same or different deque container.                                                                                                  |
| **`deque::resize()`**                  | Changes the size of the deque.                                                                                                                            |
| **`deque::push_front()`**              | Pushes elements into a deque from the front.                                                                                                              |
| **`deque::push_back()`**               | Pushes elements into a deque from the back.                                                                                                               |
| **`deque::pop_front()` and **`deque::pop_back()`** | `pop_front()` removes elements from the front. `pop_back()` removes elements from the back.                                                               |
| **`deque::front()` and **`deque::back()`**       | `front()` references the first element of the deque container. `back()` references the last element of the deque container.                                |
| **`deque::clear()` and **`deque::erase()`**     | `clear()` removes all elements of the deque container, making its size 0. `erase()` removes elements from a container from the specified position or range.|
| **`deque::empty()` and **`deque::size()`**      | `empty()` checks if the deque container is empty. `size()` returns the number of elements in the deque container.                                          |
| **`deque::operator=` and **`deque::operator[]`**| `operator=` assigns new contents to the container by replacing the existing contents. `operator[]` references the element at the given position.           |
| **`deque::at()` and **`deque::swap()`**         | `at()` references the element at the given position. `swap()` swaps the contents of one deque with another of the same type and size.                      |
| **`deque::begin()` and **`deque::end()`**       | `begin()` returns an iterator pointing to the first element of the deque container. `end()` returns an iterator pointing to the last element of the deque container. |
| **`deque::emplace_front()` and **`deque::emplace_back()`** | `emplace_front()` inserts a new element into the deque container at the beginning. `emplace_back()` inserts a new element at the end of the deque. |
