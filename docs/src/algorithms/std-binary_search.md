# `std::binary_search`

## Use case

Check if value exists in sorted range.

## Explanation

Requires sorted range. Returns bool only. Much faster than `find` for large sorted datasets.

Time complexity: O(log n). Halves earch space each step. For 1M elements, only ~20 comparisons needed. See [possible implementation](https://cppreference.com/w/cpp/algorithm/binary_search.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-binary_search.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-binary_search.cpp).

## Output

```
$ ./src/algorithms/build/std-binary_search
Symbol '_main' exists: true
```
