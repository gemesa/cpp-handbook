# `std::reduce`

## Use case

Parallel-friendly version of accumulate.

## Explanation

Unlike `accumulate`, operation must be associative (grouping does not matter) and commutative (order does not matter) for correct parallel execution.

Time complexity: O(n), sequential. See [`std::reduce`](https://cppreference.com/w/cpp/algorithm/reduce.html).

## Code

```cpp
{{#include ../../../src/algorithms/std-reduce.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-reduce.cpp).

## Output

```
$ ./src/algorithms/build/std-reduce
Total size: 32768
```
