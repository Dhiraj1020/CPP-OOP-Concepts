# std::queue
Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front. Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.

# Methods of Queue

## Methods and Definitions

| Method                 | Definition                                                                                                           |
|------------------------|----------------------------------------------------------------------------------------------------------------------|
| `queue::empty()`       | Returns whether the queue is empty. It returns true if the queue is empty; otherwise, it returns false.            |
| `queue::size()`        | Returns the size of the queue.                                                                                      |
| `queue::swap()`        | Exchanges the contents of two queues, but the queues must be of the same data type, although sizes may differ.      |
| `queue::emplace()`     | Inserts a new element into the queue container; the new element is added to the end of the queue.                   |
| `queue::front()`       | Returns a reference to the first element of the queue.                                                              |
| `queue::back()`        | Returns a reference to the last element of the queue.                                                               |
| `queue::push(g)`       | Adds the element ‘g’ at the end of the queue.                                                                      |
| `queue::pop()`         | Deletes the first element of the queue.                                                                            |

***

# exmples 
Discuss common scenarios where using a queue is appropriate, such as job scheduling, breadth-first search algorithms, and implementing caches.
