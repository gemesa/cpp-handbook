# `std::stack`

## Explanation

LIFO (Last In, First Out). Uses `std::deque` internally.

See [`std::stack`](https://en.cppreference.com/w/cpp/container/stack.html).

Time complexity:

| Operation                         | Complexity |
| --------------------------------- | ---------- |
| `push()`                          | O(1)       |
| `pop()`                           | O(1)       |
| `empty()`, `size()`               | O(1)       |

## Code

```cpp
{{#include ../../../src/data-structures/std-stack.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-stack.cpp).

## Output

```
$ ./src/data-structures/build/std-stack
Return to: 0x3000
Return to: 0x2000
Return to: 0x1000
```
