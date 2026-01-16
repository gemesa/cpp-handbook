# `std::partition`

## Use case

Reorder elements so those satisfying predicate come first.

## Explanation

Not stable. Use `stable_partition` to preserve relative order. Returns iterator to first element not satisfying the predicate.

Time complexity: O(n). Single pass. See [possible implementation](https://cppreference.com/w/cpp/algorithm/partition.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-partition.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-partition.cpp).

## Output

```
$ ./src/algorithms/build/std-partition
Executable:
__text 
Non-executable:
__cstring __const __data
```
