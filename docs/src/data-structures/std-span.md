# `std::span`

## Explanation

Non-owning view over contiguous memory. Does not allocate.

See [`std::span`](https://en.cppreference.com/w/cpp/container/span.html).

Time complexity:

| Operation                         | Complexity |
| --------------------------------- | ---------- |
| `[]`, `front()`, `back()`         | O(1)       |
| `size()`/`empty()`                | O(1)       |
| `data()`                          | O(1)       |

## Use case

- Function parameters that accept any contiguous container (vector, array, C array).

## Code

```cpp
{{#include ../../../src/data-structures/std-span.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-span.cpp).

## Output

```
$ ./src/data-structures/build/std-span
0x94000010
0xd10083ff
0xd503201f
0x94000010
0xd10083ff
0x94000010
0xd10083ff
```
