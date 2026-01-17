# `std-array`

## Explanation

Fixed-size array. Size must be known at compile-time.

See [`std::array`](https://en.cppreference.com/w/cpp/container/array.html).

Memory: elements stored inline (stack if local variable, heap if `new`ed).

Time complexity:

| Operation           | Complexity |
| ------------------- | ---------- |
| `[]`, `at()`        | O(1)       |
| `front()`, `back()` | O(1)       |
| `size()`,`empty()`  | O(1)       |

## Use case

- Size known at compile-time.
- Small collections.
- Embedded systems avoiding heap allocation.

## Code

```cpp
{{#include ../../../src/data-structures/std-array.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-array.cpp).

## Output

```
$ ./src/data-structures/build/std-array
Size: 3
First: 0xd503201f
Last: 0x94000010
At 2: 0x94000010
```
