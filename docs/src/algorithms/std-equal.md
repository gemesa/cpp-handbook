# `std::equal`

## Use case

Compare two ranges for equality.

## Explanation

Return `true` if all corresponding elements are equal. Essential for verifying code integrity and detecting patches.

Time complexity: O(n). Compare elements pairwise until mismatch or end. See [possible implementation](https://cppreference.com/w/cpp/algorithm/equal.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-equal.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-equal.cpp).

## Output

```
$ ./src/algorithms/build/std-equal
Original == modified: false
```
