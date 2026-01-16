# `std::find_if`

## Use case

Find first element matching a predicate.

## Explanation

More flexible than `std::find` (accepts a unary predicate that takes one argument). Essential for finding instructions by property (rather than exact value). Stops at first match.

Time complexity: O(n). Evaluates predicate for each element until match found. See [possible implementation](https://cppreference.com/w/cpp/algorithm/find.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-find_if.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-find_if.cpp).

## Output

```
$ ./src/algorithms/build/std-find_if
Found branch at index: 0
```
