# Singleton

## Use case

Global symbol table that must be initialized once and accessed from multiple analysis passes.

## Explanation

[Meyer's singleton](https://en.wikipedia.org/wiki/Singleton_pattern) uses a function-local static variable.

## Code

```cpp
{{#include ../../../src/design-patterns-and-idioms/singleton.cpp}}
```

[View on GitHub](https://github.com/gemesa/cpp-handbook/blob/main/src/design-patterns-and-idioms/singleton.cpp).

## Output

```
$ ./src/design-patterns-and-idioms/build/singleton
Symbol table created.
call _main
call _decrypt
call sub_0x10003000
```
