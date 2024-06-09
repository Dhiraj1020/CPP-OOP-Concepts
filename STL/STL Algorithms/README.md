# CPP-OOP-Concepts
C++ version vise OOP concepts


# STL Algorithms by C++ Version

## C++98

| Algorithm             | Description                                                                                             |
|-----------------------|---------------------------------------------------------------------------------------------------------|
| `for_each`            | Applies a function to a range of elements.                                                              |
| `count`               | Counts the elements in a range that are equal to a value.                                               |
| `count_if`            | Counts the elements in a range that satisfy a condition.                                                |
| `mismatch`            | Finds the first position where two ranges differ.                                                       |
| `equal`               | Checks if two ranges are equal.                                                                         |
| `find`                | Finds the first element in a range that is equal to a value.                                            |
| `find_if`             | Finds the first element in a range that satisfies a condition.                                          |
| `find_end`            | Finds the last subsequence in a range.                                                                  |
| `find_first_of`       | Finds the first element in a range that matches any element in another range.                           |
| `adjacent_find`       | Finds the first adjacent pair of elements that are equal or satisfy a condition.                        |
| `search`              | Finds the first subsequence in a range.                                                                 |
| `search_n`            | Finds the first sequence of N elements in a range that are equal to a value.                            |
| `copy`                | Copies a range of elements to a new location.                                                           |
| `copy_backward`       | Copies a range of elements to a new location, backwards.                                                |
| `swap`                | Swaps the values of two elements.                                                                       |
| `swap_ranges`         | Swaps the elements of two ranges.                                                                       |
| `iter_swap`           | Swaps the values of the elements pointed to by two iterators.                                           |
| `transform`           | Applies a function to a range of elements and stores the result in another range.                       |
| `replace`             | Replaces all occurrences of a value in a range with another value.                                      |
| `replace_if`          | Replaces all elements in a range that satisfy a condition with another value.                           |
| `replace_copy`        | Copies a range, replacing all occurrences of a value with another value.                                |
| `replace_copy_if`     | Copies a range, replacing all elements that satisfy a condition with another value.                     |
| `fill`                | Assigns a value to all elements in a range.                                                             |
| `fill_n`              | Assigns a value to the first N elements in a range.                                                     |
| `generate`            | Assigns the result of a function to all elements in a range.                                            |
| `generate_n`          | Assigns the result of a function to the first N elements in a range.                                    |
| `remove`              | Removes all elements equal to a value from a range (logical removal).                                   |
| `remove_if`           | Removes all elements that satisfy a condition from a range (logical removal).                           |
| `remove_copy`         | Copies a range, removing all elements equal to a value.                                                 |
| `remove_copy_if`      | Copies a range, removing all elements that satisfy a condition.                                         |
| `unique`              | Removes consecutive duplicate elements in a range (logical removal).                                    |
| `unique_copy`         | Copies a range, removing consecutive duplicate elements.                                                |
| `reverse`             | Reverses the order of elements in a range.                                                              |
| `reverse_copy`        | Copies a range, reversing the order of elements.                                                        |
| `rotate`              | Rotates the order of elements in a range.                                                               |
| `rotate_copy`         | Copies a range, rotating the order of elements.                                                         |
| `random_shuffle`      | Randomly shuffles the elements in a range.                                                              |
| `partition`           | Reorders the elements in a range so that all elements that satisfy a condition precede those that do not.|
| `stable_partition`    | Reorders the elements in a range so that all elements that satisfy a condition precede those that do not, preserving the relative order of elements.|
| `sort`                | Sorts the elements in a range.                                                                          |
| `stable_sort`         | Sorts the elements in a range, preserving the relative order of equal elements.                         |
| `partial_sort`        | Sorts the first N elements in a range.                                                                  |
| `partial_sort_copy`   | Copies and sorts the first N elements in a range.                                                       |
| `nth_element`         | Partially sorts the elements in a range so that the Nth element is the element that would be in that position if the range were sorted.|
| `lower_bound`         | Finds the first position in a range where a value could be inserted without violating the ordering.     |
| `upper_bound`         | Finds the last position in a range where a value could be inserted without violating the ordering.      |
| `equal_range`         | Finds the subrange of elements in a range that are equal to a value.                                    |
| `binary_search`       | Determines if a value exists in a sorted range.                                                         |
| `merge`               | Merges two sorted ranges.                                                                               |
| `inplace_merge`       | Merges two consecutive sorted ranges in place.                                                          |
| `includes`            | Determines if one range is a subset of another.                                                         |
| `set_union`           | Computes the union of two sets.                                                                         |
| `set_intersection`    | Computes the intersection of two sets.                                                                  |
| `set_difference`      | Computes the difference of two sets.                                                                    |
| `set_symmetric_difference` | Computes the symmetric difference of two sets.                                                      |
| `min`                 | Returns the smaller of two values.                                                                      |
| `max`                 | Returns the larger of two values.                                                                       |
| `min_element`         | Returns the smallest element in a range.                                                                |
| `max_element`         | Returns the largest element in a range.                                                                 |
| `lexicographical_compare` | Compares two ranges lexicographically.                                                             |
| `next_permutation`    | Generates the next lexicographical permutation of a range.                                              |
| `prev_permutation`    | Generates the previous lexicographical permutation of a range.                                          |
| `accumulate`          | Computes the sum of a range of elements.                                                                |
| `inner_product`       | Computes the inner product of two ranges of elements.                                                   |
| `adjacent_difference` | Computes the differences between adjacent elements in a range.                                          |
| `partial_sum`         | Computes the partial sums of a range of elements.                                                       |

## C++11

| Algorithm             | Description                                                                                             |
|-----------------------|---------------------------------------------------------------------------------------------------------|
| `all_of`              | Returns true if all elements in a range satisfy a condition.                                            |
| `any_of`              | Returns true if any element in a range satisfies a condition.                                           |
| `none_of`             | Returns true if no elements in a range satisfy a condition.                                             |
| `copy_if`             | Copies elements from a range that satisfy a condition to a new range.                                   |
| `copy_n`              | Copies the first N elements from a range to a new range.                                                |
| `move`                | Moves elements from a range to a new range.                                                             |
| `move_backward`       | Moves elements from a range to a new range, backwards.                                                  |
| `fill_n`              | Assigns a value to the first N elements in a range.                                                     |
| `iota`                | Fills a range with sequentially increasing values.                                                      |
| `is_sorted`           | Checks if a range is sorted.                                                                            |
| `is_sorted_until`     | Finds the first unsorted element in a range.                                                            |
| `is_partitioned`      | Checks if a range is partitioned according to a condition.                                              |
| `is_heap`             | Checks if a range is a max heap.                                                                        |
| `is_heap_until`       | Finds the first element that is not in heap order.                                                      |
| `minmax`              | Returns the smaller and larger of two values.                                                           |
| `minmax_element`      | Returns the smallest and largest elements in a range.                                                   |
| `clamp`               | Clamps a value between a minimum and a maximum.                                                         |
| `inplace_merge`       | Merges two consecutive sorted ranges in place.                                                          |
| `sample`              | Selects a random sample from a range.                                                                   |
| `transform`           | Applies a function to a range of elements and stores the result in another range.                       |

## C++14

| Algorithm             | Description                                                                                             |
|-----------------------|---------------------------------------------------------------------------------------------------------|
| `equal`               | Checks if two ranges are equal.                                                                         |
| `is_permutation`      | Checks if one range is a permutation of another.                                                        |

## C++17

| Algorithm             | Description                                                                                             |
|-----------------------|---------------------------------------------------------------------------------------------------------|
| `clamp`               | Clamps a value between a minimum and a maximum.                                                         |
| `for_each_n`          | Applies a function to the first N elements of a range.                                                  |
| `sample`              | Selects a random sample from a range.                                                                   |

## C++20


| Algorithm                   | Description                                                                                             |
|-----------------------------|---------------------------------------------------------------------------------------------------------|
| `ranges::adjacent_find`     | Finds the first pair of adjacent elements in a range that are equal or satisfy a given condition.       |
| `ranges::minmax`            | Returns the smaller and larger of two values.                                                           |
| `ranges::minmax_element`    | Returns the smallest and largest elements in a range.                                                   |
| `ranges::clamp`             | Clamps a value between a specified minimum and maximum.                                                 |
| `ranges::for_each_n`        | Applies a function to the first N elements of a range.                                                  |
| `ranges::sample`            | Selects a random sample from a range.                                                                   |
| `ranges::transform`         | Applies a function to each element in a range and stores the result in another range.                   |
| `ranges::remove`            | Removes elements equal to a specified value from a range (logical removal).                             |
| `ranges::remove_if`         | Removes elements that satisfy a specified condition from a range (logical removal).                     |
| `ranges::remove_copy`       | Copies a range to another range, removing elements equal to a specified value.                          |
| `ranges::remove_copy_if`    | Copies a range to another range, removing elements that satisfy a specified condition.                  |
| `ranges::unique`            | Removes consecutive duplicate elements from a range (logical removal).                                  |
| `ranges::unique_copy`       | Copies a range to another range, removing consecutive duplicate elements.                               |
| `ranges::reverse`           | Reverses the order of elements in a range.                                                              |
| `ranges::reverse_copy`      | Copies a range to another range, reversing the order of elements.                                       |
| `ranges::rotate`            | Rotates the order of elements in a range.                                                               |
| `ranges::rotate_copy`       | Copies a range to another range, rotating the order of elements.                                        |
| `ranges::partition`         | Reorders the elements in a range so that all elements that satisfy a specified condition precede those that do not. |
| `ranges::stable_partition`  | Reorders the elements in a range so that all elements that satisfy a specified condition precede those that do not, preserving the relative order of elements. |
| `ranges::sort`              | Sorts the elements in a range.                                                                          |
| `ranges::stable_sort`       | Sorts the elements in a range, preserving the relative order of equal elements.                         |
| `ranges::partial_sort`      | Sorts the first N elements in a range.                                                                  |
| `ranges::partial_sort_copy` | Copies and sorts the first N elements in a range.                                                       |
| `ranges::nth_element`       | Partially sorts the elements in a range so that the Nth element is the element that would be in that position if the range were sorted. |
| `ranges::lower_bound`       | Finds the first position in a range where a value could be inserted without violating the ordering.     |
| `ranges::upper_bound`       | Finds the last position in a range where a value could be inserted without violating the ordering.      |
| `ranges::equal_range`       | Finds the subrange of elements in a range that are equal to a specified value.                          |
| `ranges::binary_search`     | Determines if a value exists in a sorted range.                                                         |
| `ranges::merge`             | Merges two sorted ranges.                                                                               |
| `ranges::inplace_merge`     | Merges two consecutive sorted ranges in place.                                                          |
| `ranges::includes`          | Determines if one range is a subset of another.                                                         |
| `ranges::set_union`         | Computes the union of two sets.                                                                         |
| `ranges::set_intersection`  | Computes the intersection of two sets.                                                                  |
| `ranges::set_difference`    | Computes the difference of two sets.                                                                    |
| `ranges::set_symmetric_difference` | Computes the symmetric difference of two sets.                                                   |
| `ranges::min`               | Returns the smaller of two values.                                                                      |
| `ranges::max`               | Returns the larger of two values.                                                                       |
| `ranges::min_element`       | Returns the smallest element in a range.                                                                |
| `ranges::max_element`       | Returns the largest element in a range.                                                                 |
| `ranges::lexicographical_compare` | Compares two ranges lexicographically.                                                            |
| `ranges::next_permutation`  | Generates the next lexicographical permutation of a range.                                              |
| `ranges::prev_permutation`  | Generates the previous lexicographical permutation of a range.                                          |
| `ranges::accumulate`        | Computes the sum of a range of elements.                                                                |
| `ranges::inner_product`     | Computes the inner product of two ranges of elements.                                                   |
| `ranges::adjacent_difference`| Computes the differences between adjacent elements in a range.                                         |
| `ranges::partial_sum`       | Computes the partial sums of a range of elements.                                                       |


