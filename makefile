# ── Compiler ────────────────────────────────────────────────────────────────
CC      := gcc          # change to g++ for C++
CFLAGS  := -Wall -O2

# ── Source discovery ────────────────────────────────────────────────────────
CHAPS   := $(wildcard chap*)
SRCS    := $(foreach d,$(CHAPS),$(wildcard $(d)/*.c))

# For each foo/bar.c → foo/obj/bar.o  and  foo/bin/bar
OBJS    := $(foreach s,$(SRCS),$(dir $(s))obj/$(notdir $(basename $(s))).o)
BINS    := $(foreach s,$(SRCS),$(dir $(s))bin/$(notdir $(basename $(s))))

# ── Default target ──────────────────────────────────────────────────────────
.PHONY: all
all: $(BINS)

# ── Per‑file build rules generated automatically ────────────────────────────
# (GNU‑make ‘eval’ expands these before the build starts)
define MAKE_ONE
# 1 = source  • 2 = object • 3 = binary
$(2): $(1)
	@mkdir -p $$(@D)                # create obj/ on first build
	$(CC) $(CFLAGS) -c $$< -o $$@

$(3): $(2)
	@mkdir -p $$(@D)                # create bin/ on first build
	$(CC) $$< -o $$@
endef

# Emit a pair of rules for every source file
$(foreach S,$(SRCS),\
  $(eval $(call MAKE_ONE,\
          $(S),\
          $(dir $(S))obj/$(notdir $(basename $(S))).o,\
          $(dir $(S))bin/$(notdir $(basename $(S))))))

# ── House‑cleaning ──────────────────────────────────────────────────────────
.PHONY: clean
clean:
	@echo "Removing all chap*/obj & chap*/bin folders…"
	@for d in $(CHAPS); do \
	    rm -rf $$d/obj $$d/bin; \
	done

# ── Debug helper ────────────────────────────────────────────────────────────
.PHONY: print-vars
print-vars:
	@echo "CHAPS: $(CHAPS)"
	@echo "SRCS : $(SRCS)"
	@echo "OBJS : $(OBJS)"
	@echo "BINS : $(BINS)"
