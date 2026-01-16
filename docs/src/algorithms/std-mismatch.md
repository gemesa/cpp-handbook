# `std::mismatch`

## Use case

Find first position where two ranges differ.

## Explanation

Returns pair of iterators to first mismatching elements. More useful than `equal` when we need to know where ranges differ. Essential for binary diffing.

Time complexity: O(n). Compares until first difference found. See [possible implementation](https://cppreference.com/w/cpp/algorithm/mismatch.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-mismatch.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-mismatch.cpp).

## Output

```
$ ./src/algorithms/build/std-mismatch
First difference at index 1:
  Original: 0xd10083ff
  Modified: 0xd503201f
```
