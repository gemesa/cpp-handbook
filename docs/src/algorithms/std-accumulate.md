# `std::accumulate`

## Use case

Compute sum or fold operation (combining all elements into a single value) over range.

## Explanation

Takes initial value and optional binary operation. Strictly left-to-right evaluation (not parallelizable). Use `std::reduce` for parallel-friendly version.

Time complexity: O(n). Process each element exactly once. See [possible implementation](https://cppreference.com/w/cpp/algorithm/accumulate.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-accumulate.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-accumulate.cpp).

## Output

```
$ ./src/algorithms/build/std-accumulate
Total size: 8192
Checksum: 0x4
```
