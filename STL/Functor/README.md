# Functor
A C++ functor (function object) is a class or struct object that can be called like a function.

It overloads the function-call operator () and allows us to use an object like a function.

# Functors and Their Descriptions

| Functor                   | Description                                                                                                                                    |
|---------------------------|------------------------------------------------------------------------------------------------------------------------------------------------|
| `std::less<>`             | Compares two elements and returns true if the first argument is less than the second.                                                         |
| `std::greater<>`          | Compares two elements and returns true if the first argument is greater than the second.                                                      |
| `std::equal_to<>`         | Compares two elements for equality and returns true if the elements are equal.                                                                |
| `std::not_equal_to<>`     | Compares two elements for inequality and returns true if the elements are not equal.                                                          |
| `std::greater_equal<>`    | Compares two elements and returns true if the first argument is greater than or equal to the second.                                          |
| `std::less_equal<>`       | Compares two elements and returns true if the first argument is less than or equal to the second.                                             |
| `std::logical_and<>`      | Performs logical AND operation on two elements and returns true if both elements evaluate to true.                                            |
| `std::logical_or<>`       | Performs logical OR operation on two elements and returns true if at least one of the elements evaluates to true.                              |
| `std::logical_not<>`      | Performs logical NOT operation on an element and returns true if the element evaluates to false.                                              |
| `std::bit_and<>`          | Performs bitwise AND operation on two elements.                                                                                                |
| `std::bit_or<>`           | Performs bitwise OR operation on two elements.                                                                                                 |
| `std::bit_xor<>`          | Performs bitwise XOR (exclusive OR) operation on two elements.                                                                                 |
| `std::bit_not<>`          | Performs bitwise NOT operation on an element.                                                                                                  |
| `std::plus<>`             | Adds two elements.                                                                                                                             |
| `std::minus<>`            | Subtracts second element from the first.                                                                                                       |
| `std::multiplies<>`       | Multiplies two elements.                                                                                                                       |
| `std::divides<>`          | Divides first element by the second.                                                                                                           |
| `std::modulus<>`          | Computes the remainder of dividing the first element by the second.                                                                            |
| `std::negate<>`           | Negates (makes negative) the element.                                                                                                          |
| `std::logical_xor<>`      | Performs logical XOR operation on two elements and returns true if exactly one of the elements evaluates to true.                              |
| `std::identity<>`         | Returns the element unchanged.                                                                                                                  |
| `std::not_fn<>`           | Negates the result of invoking a function object.                                                                                               |
| `std::bind_front<>`       | Binds the first argument of a callable object.                                                                                                  |
| `std::bind_back<>`        | Binds the last argument of a callable object.                                                                                                   |
| `std::reference_wrapper<>`| Wraps a reference or pointer to an object.                                                                                                      |
| `std::mem_fn<>`           | Creates a callable object from a pointer to a member function.                                                                                  |
