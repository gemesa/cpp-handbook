CXX := clang++
CXXFLAGS := -std=c++23 -Wall -Wextra -Werror -I.
BUILD_DIR := build

SRCS := $(wildcard *.cpp)
BINS := $(addprefix $(BUILD_DIR)/,$(SRCS:.cpp=))

.PHONY: all clean run format format-check

all: $(BINS)

$(BUILD_DIR)/%: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

run: $(BINS)
	@for bin in $(BINS); do \
		echo "=== Running $$bin ==="; \
		./$$bin; \
	done

clean:
	rm -rf $(BUILD_DIR)

format:
	clang-format -i $(SRCS)

format-check:
	clang-format --dry-run -Werror $(SRCS)