# `std::find`

## Use case

Find a specific value in a sequence.

## Explanation

Returns iterator to first element equal to value or `end()` if not found. Must check every element in worst case (element not present or at end).

Time complexity: O(n). Scans elements one by one until found or end reached. See [possible implementation](https://cppreference.com/w/cpp/algorithm/find.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-find.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-find.cpp).

## Output

```
$ ./src/algorithms/build/std-find
Found NOP at index: 2
```
