#include <algorithm>
#include <print>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> regs = {"x0", "x1", "x2"};

  std::println("Possible register orderings:");
  std::sort(regs.begin(), regs.end());

  do {
    std::println("{}, {}, {}", regs[0], regs[1], regs[2]);
  } while (std::next_permutation(regs.begin(), regs.end()));

  return 0;
}