SRCDIR := src
BUILDDIR := build

CC := /usr/bin/gcc
CFLAGS89 := -Wall -std=c89 -g
CFLAGS99 := -Wall -std=c99 -g

# Автоматический поиск исходников
EXERCISE_SRC := $(shell find $(SRCDIR) -type f -path '*/section*/ex*.c')
PROJECT_SRC := $(shell find $(SRCDIR) -type f -path '*/projects/project*.c')

# Генерация целей
EXERCISE_TARGETS := $(patsubst $(SRCDIR)/%.c, $(BUILDDIR)/%, $(EXERCISE_SRC))
PROJECT_TARGETS := $(patsubst $(SRCDIR)/%.c, $(BUILDDIR)/%, $(PROJECT_SRC))

.PHONY: all clean

all: $(EXERCISE_TARGETS) $(PROJECT_TARGETS)

# Общее правило для упражнений
$(BUILDDIR)/%: $(SRCDIR)/%.c
	@mkdir -p $(@D)
ifeq (section,$(findstring section,$<))
	$(CC) $(CFLAGS89) $< -o $@
else
	$(CC) $(CFLAGS99) $< -o $@
endif

# Особые случаи с библиотеками
$(BUILDDIR)/part2/projects/project3: LDLIBS += -lm
$(BUILDDIR)/part2/projects/project5: LDLIBS += -lm

clean:
	rm -rf $(BUILDDIR)
