# `std::clamp`

## Use case

Constrain value to a range.

## Explanation

Returns `lo` if `v < lo`, `hi` if `v > hi`, otherwise `v`. Useful for bounds checking instruction operands like branch offsets.

Time complexity: O(1). Just two comparisons. See [possible implementation](https://cppreference.com/w/cpp/algorithm/clamp.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-clamp.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-clamp.cpp).

## Output

```
$ ./src/algorithms/build/std-clamp
Clamped: 128 MB
```
