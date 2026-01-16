# `std::copy`/`std::copy_if`

## Use case

Copy elements to another range, optionally filtering.

## Explanation

`copy_if` is the filtered version (only copies elements matching predicate). Use with `back_inserter` for growing containers. 

Time complexity: O(n). Visits each element once. See [possible implementation](https://cppreference.com/w/cpp/algorithm/copy.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-copy.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-copy.cpp).

## Output

```
$ ./src/algorithms/build/std-copy
__TEXT (vmaddr: 0x100000000, vmsize: 0x4000)
```
