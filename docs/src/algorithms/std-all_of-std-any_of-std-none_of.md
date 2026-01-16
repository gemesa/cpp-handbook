# `std::all_of`/`std::any_of`/`std:none_of`

## Use case

Check if predicate holds for all/any/none of the elements.

## Explanation

Useful for validating instruction sequences.

Time complexity: O(n) worst-case but short-circuits:
- `all_of`: stops at first `false`
- `any_of`: stops at first `true`
- `none_of`: stops at first `true`

Best case O(1) if first element determines result.

See [possible implementation](https://cppreference.com/w/cpp/algorithm/all_of.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-all_of-std-any_of-std-none_of.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-all_of-std-any_of-std-none_of.cpp).

## Output

```
$ ./src/algorithms/build/std-all_of-std-any_of-std-none_of
All branch instructions: false
Any branch instructions: true
No branch instructions: false
```
