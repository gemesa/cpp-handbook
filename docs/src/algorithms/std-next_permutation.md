# `std::next_permutation`

## Use case

Generate next permutation in dictionary order.

## Explanation

"Lexicographically greater" means dictionary order (how words are sorted alphabetically). The permutations are generated in sorted order. Returns false when wrapper back to the smallest permutation (sorted order).

Time complexity: O(n) per call but n! total permutations exist. See [possible implementation](https://cppreference.com/w/cpp/algorithm/next_permutation.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-next_permutation.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-next_permutation.cpp).

## Output

```
$ ./src/algorithms/build/std-next_permutation
x0, x1, x2
x0, x2, x1
x1, x0, x2
x1, x2, x0
x2, x0, x1
x2, x1, x0
```
