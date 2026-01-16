# `std::reverse`

## Use case

Reverse element order.

## Explanation

In-place reversal. `reverse_copy` for non-modifying version. Useful for endianness conversion or reversing instruction sequences.

Time complexity: O(n). Swaps n/2 pairs of elements. See [possible implementation](https://cppreference.com/w/cpp/algorithm/reverse.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-reverse.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-reverse.cpp).

## Output

```
$ ./src/algorithms/build/std-reverse
0xd503201f
0xd10083ff
0x94000010
```
