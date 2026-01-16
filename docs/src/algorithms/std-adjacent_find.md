# `std::adjacent_find`

## Use case

Find first pair of consecutive equal (or related) elements.

## Explanation

Returns iterator to first of the matching pair. With custom predicate, it can find any adjacent relationship (increasing, decreasing etc.). Useful for detecting NOP sleds and other repeated instructions.

Time complexity: O(n). Single pass comparing adjacent pairs. See [possible implementation](https://cppreference.com/w/cpp/algorithm/adjacent_find.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-adjacent_find.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-adjacent_find.cpp).

## Output

```
$ ./src/algorithms/build/std-adjacent_find
Found NOP sled at index 0
```
