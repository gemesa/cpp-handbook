# `std::unique`

## Use case

Remove consecutive duplicates.

## Explanation

Only removes adjacent duplicates (sort first for true uniqueness). Returns iterator to new end. Like `remove`, requires `erase` to actually shrink container.

Time complexity: O(n). Single pass comparing adjacent elements. See [possible implementation](https://cppreference.com/w/cpp/algorithm/unique.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-unique.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-unique.cpp).

## Output

```
$ ./src/algorithms/build/std-unique
0x1000
0x1040
0x1080
```
