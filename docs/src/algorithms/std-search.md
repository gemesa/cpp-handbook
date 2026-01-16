# `std::search`

## Use case

Find a subsequence within a sequence.

## Explanation

Returns iterator to first occurence of pattern or `end()` if not found. Essential for gadget finding, pattern matching in code and detecting instruction sequences.

Time complexity: O(n*m) worst case, where n is haystack size and m is needle size. See [possible implementation](https://cppreference.com/w/cpp/algorithm/search.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-search.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-search.cpp).

## Output

```
$ ./src/algorithms/build/std-search
Found gadget at index 4
```
