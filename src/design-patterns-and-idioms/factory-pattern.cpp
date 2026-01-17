#include <cstdint>
#include <memory>
#include <print>
#include <string>

class Disassembler {
public:
  virtual ~Disassembler() = default;
  virtual std::string name() const = 0;
};

class X64Disassembler : public Disassembler {
public:
  std::string name() const override { return "x86-64"; }
};

class ARM64Disassembler : public Disassembler {
public:
  std::string name() const override { return "arm64"; }
};

std::unique_ptr<Disassembler> create_disassembler(const std::string &arch) {
  if (arch == "x86-64") {
    return std::make_unique<X64Disassembler>();
  }
  if (arch == "arm64") {
    return std::make_unique<ARM64Disassembler>();
  }
  return nullptr;
}

int main() {
  for (auto arch : {"x86-64", "arm64", "mips"}) {
    if (auto disasm = create_disassembler(arch)) {
      std::println("{}", disasm->name());
    } else {
      std::println("Not supported: {}", arch);
    }
  }
  return 0;
}