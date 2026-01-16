# `std::sort`

## Use case

Sort elements in ascending order (default) or by custom comparator (in case of complex types).

## Explanation

Time complexity: O(n log n). Pick pivot + partitioning: n, recursing on each half: log n. See [possible implementation](https://cppreference.com/w/cpp/algorithm/sort.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-sort.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-sort.cpp).

## Output

```
$ ./src/algorithms/build/std-sort
0x10001000 _main
0x10002000 _helper
0x10003000 _fini
```
