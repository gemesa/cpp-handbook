# `std::rotate`

## Use case

Rotate elements so that a given element becomes the first.

## Explanation

Left rotation: elements before middle move to end. Use `rotate_copy` for non-modifying version. Returns iterator to original first element's new position.

Time complexity: O(n). Each element is moved once. See [possible implementation](https://cppreference.com/w/cpp/algorithm/rotate.html#Possible_implementation).

## Code

```cpp
{{#include ../../../src/algorithms/std-rotate.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/algorithms/std-rotate.cpp).

## Output

```
$ ./src/algorithms/build/std-rotate
Rotated load commands:
LC_MAIN
LC_SEGMENT_64 (__LINKEDIT)
LC_SEGMENT_64 (__TEXT)
LC_SEGMENT_64 (__DATA)
```
