# `std::iota`

## Use case

Fill range with sequentially increasing values.

## Explanation

Fill with value, value+1, ... .

Time complexity: O(n). Increments and assigns once per element. See [possible implementation](https://cppreference.com/w/cpp/algorithm/iota.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-iota.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-iota.cpp).

## Output

```
$ ./src/algorithms/build/std-iota
0x10000000
0x10000001
0x10000002
0x10000003
0x10000004
```
