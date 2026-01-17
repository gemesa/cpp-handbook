# `std::set_intersection`/`std::set_union`/`std::set_difference`

## Use case

Perform set operations on sorted ranges.

## Explanation

Input ranges must be sorted. Output is sorted. Single pass through both ranges. Useful for comparing symbol tables or finding common/unique symbols.

Time complexity: O(n + m) where n and m are the sizes of the two input ranges. See possible implementations: [`std::set_intersection`](https://cppreference.com/w/cpp/algorithm/set_intersection.html#Possible_implementation), [`std::set_union`](https://cppreference.com/w/cpp/algorithm/set_union.html#Possible_implementation), [`std::set_difference`](https://cppreference.com/w/cpp/algorithm/set_difference.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-set_intersection-set_union-set_difference.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-set_intersection-set_union-set_difference.cpp).

## Output

```
$ ./src/algorithms/build/std-set_intersection-set_union-set_difference
Common:
_main _helper _cleanup 
Only A:
_old_func 
Only B:
_new_func
```
