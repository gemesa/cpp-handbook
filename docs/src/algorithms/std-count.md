# `std::count`/`std::count_if`

## Use case

Count occurences of a value or elements matching a predicate.

## Explanation

`count` for exact matches, `count_if` for predicate-based counting. Always travels entire range.

Time complexity: O(n). Must examine every element to get accurate count. See [possible implementation](https://cppreference.com/w/cpp/algorithm/count.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-count.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-count.cpp).

## Output

```
$ ./src/algorithms/build/std-count
NOP count: 1
Branch count: 1
```
