# `std::stable_sort`

## Use case

Sort while preserving relative order of equivalent elements.

## Explanation

Slightly slower than `std::sort` due to stability guarantee.

Time complexity: O(n log n) with extra memory, worse than O(n log n) without. The extra memory is necessary for merge sort. See [possible implementation](https://cppreference.com/w/cpp/algorithm/stable_sort.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-stable_sort.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-stable_sort.cpp).

## Output

```
$ ./src/algorithms/build/std-stable_sort
0x1000 _init (was #0)
0x1040 _main (was #2)
0x1040 main (was #3)
0x1040 _start (was #4)
0x1080 _helper (was #1)
```
