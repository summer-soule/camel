SRCDIR := src
BINDIR := bin

CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

# Auto search source files
EXERCISE_SRC := $(shell find $(SRCDIR) -type f -path '*/section*/ex*.c')
PROJECT_SRC := $(shell find $(SRCDIR) -type f -path '*/projects/project*.c')

# Search for Makefiles which related to multifile programs (for example, part 15)
MODULAR_TARGETS := $(shell dirname `find $(SRCDIR) -type f -path '*Makefile'`)
EXERCISE_MODULAR_TARGETS := $(patsubst $(SRCDIR)/%, $(BINDIR)/%, $(MODULAR_TARGETS))

EXCLUDE_MODULE_SRC := $(shell find $(MODULAR_TARGETS) -type f -path '*.c')
EXERCISE_SRC := $(filter-out $(EXCLUDE_MODULE_SRC), $(EXERCISE_SRC))
PROJECT_SRC := $(filter-out $(EXCLUDE_MODULE_SRC), $(PROJECT_SRC))

# Generate targets
EXERCISE_TARGETS_ALL := $(patsubst $(SRCDIR)/%.c, $(BINDIR)/%, $(EXERCISE_SRC))
PROJECT_TARGETS_ALL := $(patsubst $(SRCDIR)/%.c, $(BINDIR)/%, $(PROJECT_SRC))

# C89 targets
EXERCISE_TARGETS_C89 := $(BINDIR)/part4/section1/ex3 $(BINDIR)/part4/section1/ex5

# C99 targets
define EXERCISE_TARGETS_C99_EXCLUDE
$(BINDIR)/part2/section8/ex10
$(BINDIR)/part2/section8/ex9
$(BINDIR)/part2/section8/ex8
$(BINDIR)/part2/section7/ex6
$(BINDIR)/part2/section7/ex7
$(BINDIR)/part2/section7/ex5
$(BINDIR)/part3/section2/ex3
$(BINDIR)/part4/section3/ex13
$(BINDIR)/part9/section1/ex1
$(BINDIR)/part10/section4/ex1
$(BINDIR)/part10/section4/ex2
$(BINDIR)/part10/section4/ex3
$(BINDIR)/part14/section4/ex12
$(BINDIR)/part14/section4/ex14
$(BINDIR)/part14/section5/ex16
$(BINDIR)/part15/section1/ex1
$(BINDIR)/part15/section2/ex2
$(BINDIR)/part15/section4/ex6
$(BINDIR)/part18/section2/ex2
$(BINDIR)/part18/section2/ex3
$(BINDIR)/part18/section2/ex5
$(BINDIR)/part18/section3/ex7
$(BINDIR)/part18/section4/ex8
$(BINDIR)/part18/section4/ex9
$(BINDIR)/part19/section1/ex1
$(BINDIR)/part19/section3/ex5
$(BINDIR)/part21/section1/ex3
endef

EXERCISE_TARGETS_C99 := $(filter-out $(EXERCISE_TARGETS_C89) $(EXERCISE_TARGETS_C99_EXCLUDE), $(EXERCISE_TARGETS_ALL))

.PHONY: all clean

all: $(EXERCISE_TARGETS_C89) $(EXERCISE_TARGETS_C99) $(PROJECT_TARGETS_ALL) $(EXERCISE_MODULAR_TARGETS)

# Rule for modular programs
$(EXERCISE_MODULAR_TARGETS): $(BINDIR)/%: $(SRCDIR)/%
	@mkdir -p $(dir $@)
	$(MAKE) -C $< BUILD_DIR=`pwd`/$(dir $@)

# Generic rule
$(BINDIR)/%: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

# Special case for LDLIBS
$(BINDIR)/part2/projects/project3: LDLIBS += -lm
$(BINDIR)/part2/projects/project5: LDLIBS += -lm
$(BINDIR)/part9/projects/project6: LDLIBS += -lm
$(BINDIR)/part14/section3/ex6: LDLIBS += -lm
$(BINDIR)/part21/section1/ex1: LDLIBS += -lpaper

# Special case for C89
$(EXERCISE_TARGETS_C89): CFLAGS := -Wall -std=c89 -g

clean:
	rm -rf $(BINDIR)
