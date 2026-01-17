# `std::shuffle`

## Use case

Randomly reorder elements using a random number generator.

## Explanation

Requires a uniform random generator (like `std::mt19937`). Useful for obfuscation and fuzzing.

Time complexity: O(n) (exactly n - 1 swaps). See [possible implementation](https://cppreference.com/w/cpp/algorithm/random_shuffle.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-shuffle.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-shuffle.cpp).

## Output

```
$ ./src/algorithms/build/std-shuffle
0xd10083ff
0xd503201f
0x94000010
```
