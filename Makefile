BUILDDIR=build
SRCDIR=src

CC=/usr/bin/gcc
CFLAGS=-Wall -std=c99 -g

# Parts
PART2=$(SRCDIR)/part2

# Exercises
p2s1e1=$(BUILDDIR)/part2/section1/ex1
p2s2e2=$(BUILDDIR)/part2/section2/ex2
p2s2e3=$(BUILDDIR)/part2/section4/ex3
p2s2e4=$(BUILDDIR)/part2/section4/ex4

# Projects
p2proj1=$(BUILDDIR)/part2/projects/project1
p2proj2=$(BUILDDIR)/part2/projects/project2
p2proj3=$(BUILDDIR)/part2/projects/project3
p2proj4=$(BUILDDIR)/part2/projects/project4
p2proj5=$(BUILDDIR)/part2/projects/project5
p2proj6=$(BUILDDIR)/part2/projects/project6
p2proj7=$(BUILDDIR)/part2/projects/project7

# Targets
TARGETS=$(p2s1e1) $(p2s2e2) $(p2s2e3) $(p2s2e4) $(p2proj1) $(p2proj2) $(p2proj3) $(p2proj4) $(p2proj5) $(p2proj6) $(p2proj7)

.PHONY=all
all: $(TARGETS)

# Building rules for exercises
$(p2s1e1): $(SRCDIR)/part2/section1/ex1.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p2s2e2): $(SRCDIR)/part2/section2/ex2.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p2s2e3): $(SRCDIR)/part2/section4/ex3.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p2s2e4): $(SRCDIR)/part2/section4/ex4.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

# Building rules for projects
$(p2proj1): $(SRCDIR)/part2/projects/project1.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p2proj2): $(SRCDIR)/part2/projects/project2.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p2proj3): $(SRCDIR)/part2/projects/project3.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@ -lm

$(p2proj4): $(SRCDIR)/part2/projects/project4.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p2proj5): $(SRCDIR)/part2/projects/project5.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@ -lm

$(p2proj6): $(SRCDIR)/part2/projects/project6.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p2proj7): $(SRCDIR)/part2/projects/project7.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

# Create build dir
$(BUILDDIR):
	mkdir -p $(BUILDDIR)/part2/section{1,2,4}
	mkdir -p $(BUILDDIR)/part2/projects

# Remove build directory
.PHONY=clean
clean:
	rm -r build
