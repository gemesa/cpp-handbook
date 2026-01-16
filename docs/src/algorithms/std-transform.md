# `std::transform`

## Use case

Apply a function to each element and store results.

## Explanation

Can transform in-place or to different container.

Time complexity: O(n). Applies transformation exactly once per element. See [possible implementation](https://cppreference.com/w/cpp/algorithm/transform.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-transform.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-transform.cpp).

## Output

```
$ ./src/algorithms/build/std-transform
0x10000010
0x10000020
0x10000030
0x10000040
```
