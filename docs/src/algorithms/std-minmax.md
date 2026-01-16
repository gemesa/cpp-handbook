# `std::min_element`/`std::max_element`/`std::minmax_element`

## Use case

Find smallest/largest element in range.

## Explanation

Returns iterator, not value. `minmax_element` is more efficient than calling `mint_element` and `max_element` separately.

Time complexity: O(n). See possible implementation: [`std::min_element`](https://cppreference.com/w/cpp/algorithm/min_element.html#Possible_implementation), [`std::max_element`](https://cppreference.com/w/cpp/algorithm/max_element.html#Possible_implementation), [`std::minmax_element`](https://cppreference.com/w/cpp/algorithm/minmax_element.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-minmax.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-minmax.cpp).

## Output

```
$ ./src/algorithms/build/std-minmax
Address range: 0x10000000-0x10003000
```
