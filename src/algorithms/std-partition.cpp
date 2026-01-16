#include <algorithm>
#include <cstdint>
#include <print>
#include <string>
#include <vector>

struct Section {
  std::string name;
  uint32_t flags;
};

// https://developer.apple.com/library/archive/documentation/DeveloperTools/Reference/Assembler/040-Assembler_Directives/asm_directives.html#//apple_ref/doc/uid/TP30000823-SW1
// https://llvm.org/doxygen/namespacellvm_1_1MachO.html
constexpr uint32_t S_ATTR_PURE_INSTRUCTIONS = 0x80000000;
constexpr uint32_t S_ATTR_SOME_INSTRUCTIONS = 0x00000400;

bool isExecutable(const Section &sec) {
  return (sec.flags & S_ATTR_PURE_INSTRUCTIONS) ||
         (sec.flags & S_ATTR_SOME_INSTRUCTIONS);
}

int main() {
  std::vector<Section> sections = {{"__text", S_ATTR_PURE_INSTRUCTIONS},
                                   {"__cstring", 0},
                                   {"__const", 0},
                                   {"__data", 0}};

  auto partPoint =
      std::partition(sections.begin(), sections.end(), isExecutable);

  std::println("Executable:");
  for (auto it = sections.begin(); it != partPoint; ++it) {
    std::print("{} ", it->name);
  }
  std::println("");

  std::println("Non-executable:");
  for (auto it = partPoint; it != sections.end(); ++it) {
    std::print("{} ", it->name);
  }
  std::println("");

  return 0;
}