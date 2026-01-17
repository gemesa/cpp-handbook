# `std::generate`

## Use case

Fill range with values produced by a generator function.

## Explanation

Calls generator for each element (generator takes no arguments). Usful for creating instruction sequences.

Time complexity: O(n). Calls generator once per element. See [possible implementation](https://cppreference.com/w/cpp/algorithm/generate.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-generate.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-generate.cpp).

## Output

```
$ ./src/algorithms/build/std-generate
0xd503201f
0xd503201f
0xd503201f
0xd503201f
0xd503201f
```
