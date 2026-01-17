#include <cstdint>
#include <print>
#include <string>
#include <variant>
#include <vector>

// https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/MOV--register---Move-register-value--an-alias-of-ORR--shifted-register--?lang=en
struct MovInstr {
  std::string dest;
  std::string src;
};

// https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/BL--Branch-with-link-?lang=en
struct BlInstr {
  uint64_t target;
  std::string name;
};

// https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/RET--Return-from-subroutine-?lang=en
struct RetInstr {};

using Instruction = std::variant<MovInstr, BlInstr, RetInstr>;

struct DisasmVisitor {
  void operator()(const MovInstr &m) const {
    std::println("mov {}, {}", m.dest, m.src);
  }
  void operator()(const BlInstr &b) const {
    std::println("bl {:#x} ; {}", b.target, b.name);
  }
  void operator()(const RetInstr &) const { std::println("ret"); }
};

int main() {
  std::vector<Instruction> code = {MovInstr{"x0", "x1"},
                                   BlInstr{0x10001000, "_printf"}, RetInstr{}};

  std::println("Disassembly:");
  for (const auto &instr : code) {
    std::visit(DisasmVisitor{}, instr);
  }

  return 0;
}