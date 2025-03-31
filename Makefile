SRCDIR := src
BUILDDIR := build

CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

# Auto search source files
EXERCISE_SRC := $(shell find $(SRCDIR) -type f -path '*/section*/ex*.c')
PROJECT_SRC := $(shell find $(SRCDIR) -type f -path '*/projects/project*.c')

# Generate targets
EXERCISE_TARGETS_ALL := $(patsubst $(SRCDIR)/%.c, $(BUILDDIR)/%, $(EXERCISE_SRC))
PROJECT_TARGETS_ALL := $(patsubst $(SRCDIR)/%.c, $(BUILDDIR)/%, $(PROJECT_SRC))

# C89 targets
EXERCISE_TARGETS_C89 := $(BUILDDIR)/part4/section1/ex3 $(BUILDDIR)/part4/section1/ex5

# C99 targets
define EXERCISE_TARGETS_C99_EXCLUDE
$(BUILDDIR)/part2/section8/ex10
$(BUILDDIR)/part2/section8/ex9
$(BUILDDIR)/part2/section8/ex8
$(BUILDDIR)/part2/section7/ex6
$(BUILDDIR)/part2/section7/ex7
$(BUILDDIR)/part2/section7/ex5
$(BUILDDIR)/part3/section2/ex3
$(BUILDDIR)/part4/section3/ex13
$(BUILDDIR)/part9/section1/ex1
$(BUILDDIR)/part10/section4/ex1
$(BUILDDIR)/part10/section4/ex2
endef

EXERCISE_TARGETS_C99 := $(filter-out $(EXERCISE_TARGETS_C89) $(EXERCISE_TARGETS_C99_EXCLUDE), $(EXERCISE_TARGETS_ALL))

.PHONY: all clean

all: $(EXERCISE_TARGETS_C89) $(EXERCISE_TARGETS_C99) $(PROJECT_TARGETS_ALL)

# Generic rule
$(BUILDDIR)/%: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

# Special case for LDLIBS
$(BUILDDIR)/part2/projects/project3: LDLIBS += -lm
$(BUILDDIR)/part2/projects/project5: LDLIBS += -lm
$(BUILDDIR)/part9/projects/project6: LDLIBS += -lm

# Special case for C89
$(EXERCISE_TARGETS_C89): CFLAGS := -Wall -std=c89 -g

clean:
	rm -rf $(BUILDDIR)
