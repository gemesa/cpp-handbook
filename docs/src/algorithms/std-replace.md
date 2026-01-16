# `std::replace`/`std::replace_if`

## Use case

Replace values in-place.

## Explanation

`replace` for exact value match, `replace_if` for prediacate-based replacement. Does not change container size.

Time complexity: O(n). Checks and potentially replaces each element. See [possible implementation](https://cppreference.com/w/cpp/algorithm/replace.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-replace.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-replace.cpp).

## Output

```
$ ./src/algorithms/build/std-replace
0xd503201f
```
