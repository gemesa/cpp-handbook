# `std::merge`

## Use case

Merge two sorted ranges into one sorted output.

## Explanation

Both inputs must be sorted. Useful for combining symbol tables.

Time complexity: O(n + m). Single pass through both ranges. See [possible implementation](https://cppreference.com/w/cpp/algorithm/merge.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-merge.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-merge.cpp).

## Output

```
$ ./src/algorithms/build/std-merge
0x1000 _init
0x1100 _helper
0x1200 _main
0x1300 _cleanup
```
