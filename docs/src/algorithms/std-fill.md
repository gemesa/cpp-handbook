# `std::fill`/`std::fill_n`

## Use case

Fill range with a value.

## Explanation

`fill` takes iterator range, `fill_n` takes a start iterator and count.

Time complexity: O(n). Assigns value to each element. See [possible implementation](https://cppreference.com/w/cpp/algorithm/fill.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-fill.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-fill.cpp).

## Output

```
$ ./src/algorithms/build/std-fill
NOP sled:
0xd503201f
0xd503201f
0xd503201f
0xd503201f
0xd503201f
```
