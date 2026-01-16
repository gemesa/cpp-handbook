# `std::remove_if`

## Use case

Remove elements matching predicate.

## Explanation

`remove_if` moves unwanted elements to end, returns iterator to new logical end. Must call `erase` to actually remove (remove-erase idiom). C++20 adds `std::erase_if` which combines both steps.

Time complexity: O(n). Single pass through elements. See [possible implementation](https://cppreference.com/w/cpp/algorithm/remove.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-remove_if.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-remove_if.cpp).

## Output

```
$ ./src/algorithms/build/std-remove_if
2
```
