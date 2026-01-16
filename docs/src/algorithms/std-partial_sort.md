# `std::partial_sort`

## Use case

Sort only the first k elements.

## Explanation

Only sorts the first k elements. Rest are in unspecified order (but all >= sorted portion). Much faster than full sort when k << n. Perfect for "top N" queries.

Time complexity: O(n log k) where k is the number of elements to sort. See [possible implementation](https://cppreference.com/w/cpp/algorithm/partial_sort.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-partial_sort.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-partial_sort.cpp).

## Output

```
$ ./src/algorithms/build/std-partial_sort
Top 3 largest functions:
_parse: 2048
_process: 1024
_validate: 512
```
