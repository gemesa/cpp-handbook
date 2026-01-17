#include <print>
#include <vector>

int main() {
  std::vector<uint32_t> instructions;

  // Reserve to avoid reallocations.
  instructions.reserve(100);

  // $ echo "bl #0x40" | llvm-mc -triple=aarch64 -show-encoding
  // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
  instructions.push_back(0x94000010);
  instructions.push_back(0x94000010);
  instructions.push_back(0x94000010);

  std::println("Size: {}, capacity: {}", instructions.size(),
               instructions.capacity());

  return 0;
}