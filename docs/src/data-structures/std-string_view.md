# `std::string_view`

## Explanation

Non-owning view over character data. Avoids copying strings.

See [`std::string_view`](https://en.cppreference.com/w/cpp/string/basic_string_view.html).

Time complexity:

| Operation                         | Complexity |
| --------------------------------- | ---------- |
| `[]`, `front()`, `back()`         | O(1)       |
| `size()`/`empty()`                | O(1)       |
| `compare()`                       | O(n)       |

## Code

```cpp
{{#include ../../../src/data-structures/std-string_view.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/data-structures/std-string_view.cpp).

## Output

```
$ ./src/data-structures/build/std-string_view
Symbol: _main
Symbol: _helper
```
