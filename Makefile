BUILDDIR=build
SRCDIR=src

CC=/usr/bin/gcc

# Parts
PART2=$(SRCDIR)/part2

# Exercises
p2s1e1=$(BUILDDIR)/part2/section1/ex1
p2s2e2=$(BUILDDIR)/part2/section2/ex2
p2s2e3=$(BUILDDIR)/part2/section4/ex3

TARGETS=$(p2s1e1) $(p2s2e2) $(p2s2e3)

.PHONY=all
all: $(TARGETS)

# Building rules for exercises
$(p2s1e1): $(SRCDIR)/part2/section1/ex1.c | $(BUILDDIR)
	$(CC) -std=c99 -g $^ -o $@

$(p2s2e2): $(SRCDIR)/part2/section2/ex2.c | $(BUILDDIR)
	$(CC) -std=c99 -g $^ -o $@

$(p2s2e3): $(SRCDIR)/part2/section4/ex3.c | $(BUILDDIR)
	$(CC) -std=c99 -g $^ -o $@

# Create build dir
$(BUILDDIR):
	mkdir -p $(BUILDDIR)
	mkdir -p $(BUILDDIR)/part{1..22}
	mkdir -p $(BUILDDIR)/part2/section{1..8}

# Remove build directory
.PHONY=clean
clean:
	rm -r build
