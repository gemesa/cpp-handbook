#include <cstdint>
#include <print>

template <typename Derived> class MemoryRegion {
public:
  void dump() const {
    // Dereference this, then cast the base reference to derived reference.
    const auto &self = static_cast<const Derived &>(*this);
    std::println("{}: {:#x}", self.name(), self.start());
  }
};

class CodeSection : public MemoryRegion<CodeSection> {
  uint64_t base_;

public:
  CodeSection(uint64_t base) : base_(base) {}
  uint64_t start() const { return base_; }
  const char *name() const { return ".text"; }
};

class DataSection : public MemoryRegion<DataSection> {
  uint64_t base_;

public:
  DataSection(uint64_t base) : base_(base) {}
  uint64_t start() const { return base_; }
  const char *name() const { return ".data"; }
};

int main() {
  CodeSection text{0x10001000};
  DataSection data{0x10002000};

  text.dump();
  data.dump();

  return 0;
}