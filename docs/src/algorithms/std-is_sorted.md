# `std::is_sorted`

## Use case

Check if range is sorted.

## Explanation

`std::is_sorted_until` returns iterator to first out-of-order element. Useful for validation before using algorithms that require sorted input (e.g. `std::binary_search`).

Time complexity: O(n) worst case but short-circuits at first out-of-order element. See [possible implementation](https://cppreference.com/w/cpp/algorithm/is_sorted.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-is_sorted.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-is_sorted.cpp).

## Output

```
$ ./src/algorithms/build/std-is_sorted
good sorted: true
bad sorted: false
Sorting breaks at 0x2000 (index 2)
```
