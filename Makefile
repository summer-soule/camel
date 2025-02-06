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

p3s1e1=$(BUILDDIR)/part3/section1/ex1
p3s1e2=$(BUILDDIR)/part3/section1/ex2
p3s2e4=$(BUILDDIR)/part3/section2/ex4
p3s2e5=$(BUILDDIR)/part3/section2/ex5
p3s2e6=$(BUILDDIR)/part3/section2/ex6

p4s1e1=$(BUILDDIR)/part4/section1/ex1
p4s1e2=$(BUILDDIR)/part4/section1/ex2
p4s1e3=$(BUILDDIR)/part4/section1/ex3
p4s1e4=$(BUILDDIR)/part4/section1/ex4
p4s1e5=$(BUILDDIR)/part4/section1/ex5
p4s1e6=$(BUILDDIR)/part4/section1/ex6
p4s1e7=$(BUILDDIR)/part4/section1/ex7
p4s1e8=$(BUILDDIR)/part4/section1/ex8

p4s2e9=$(BUILDDIR)/part4/section2/ex9
p4s2e10=$(BUILDDIR)/part4/section2/ex10

p4s3e11=$(BUILDDIR)/part4/section3/ex11
p4s3e12=$(BUILDDIR)/part4/section3/ex12

p4s4e14=$(BUILDDIR)/part4/section3/ex14

p4s5e15=$(BUILDDIR)/part4/section5/ex15

# Projects
p2proj1=$(BUILDDIR)/part2/projects/project1
p2proj2=$(BUILDDIR)/part2/projects/project2
p2proj3=$(BUILDDIR)/part2/projects/project3
p2proj4=$(BUILDDIR)/part2/projects/project4
p2proj5=$(BUILDDIR)/part2/projects/project5
p2proj6=$(BUILDDIR)/part2/projects/project6
p2proj7=$(BUILDDIR)/part2/projects/project7
p2proj8=$(BUILDDIR)/part2/projects/project8

p3proj1=$(BUILDDIR)/part3/projects/project1
p3proj2=$(BUILDDIR)/part3/projects/project2
p3proj3=$(BUILDDIR)/part3/projects/project3
p3proj4=$(BUILDDIR)/part3/projects/project4
p3proj5=$(BUILDDIR)/part3/projects/project5
p3proj6=$(BUILDDIR)/part3/projects/project6

p4proj1=$(BUILDDIR)/part4/projects/project1
p4proj2=$(BUILDDIR)/part4/projects/project2
p4proj3=$(BUILDDIR)/part4/projects/project3
p4proj4=$(BUILDDIR)/part4/projects/project4
p4proj5=$(BUILDDIR)/part4/projects/project5
p4proj6=$(BUILDDIR)/part4/projects/project6

# Targets
PART2 = $(p2s1e1) $(p2s2e2) $(p2s2e3) $(p2s2e4) $(p2proj1) $(p2proj2) $(p2proj3) $(p2proj4) $(p2proj5) $(p2proj6) $(p2proj7) $(p2proj8)
PART3 = $(p3s1e1) $(p3s1e2) $(p3s2e4) $(p3s2e5) $(p3s2e6) $(p3proj1) $(p3proj2) $(p3proj3) $(p3proj4) $(p3proj5) $(p3proj6)
PART4 =  $(p4s1e1) $(p4s1e2) $(p4s1e3) $(p4s1e4) $(p4s1e5) $(p4s1e6) $(p4s1e7) $(p4s1e8) $(p4s2e9) $(p4s2e10) $(p4s3e11) $(p4s3e12) $(p4s4e14) $(p4s5e15) $(p4proj1) $(p4proj2) $(p4proj3) $(p4proj4) $(p4proj5) $(p4proj6)

.PHONY=all
all: $(PART2) $(PART3) $(PART4)

# Building rules for exercises
$(p2s1e1): $(SRCDIR)/part2/section1/ex1.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p2s2e2): $(SRCDIR)/part2/section2/ex2.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p2s2e3): $(SRCDIR)/part2/section4/ex3.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p2s2e4): $(SRCDIR)/part2/section4/ex4.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3s1e1): $(SRCDIR)/part3/section1/ex1.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3s1e2): $(SRCDIR)/part3/section1/ex2.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3s2e4): $(SRCDIR)/part3/section2/ex4.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3s2e5): $(SRCDIR)/part3/section2/ex5.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3s2e6): $(SRCDIR)/part3/section2/ex6.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4s1e1): $(SRCDIR)/part4/section1/ex1.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4s1e2): $(SRCDIR)/part4/section1/ex2.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4s1e3): $(SRCDIR)/part4/section1/ex3.c | $(BUILDDIR)
	$(CC) -Wall -std=c89 -g $^ -o $@

$(p4s1e4): $(SRCDIR)/part4/section1/ex4.c | $(BUILDDIR)
	$(CC) -Wall -std=c99 -g $^ -o $@

$(p4s1e5): $(SRCDIR)/part4/section1/ex5.c | $(BUILDDIR)
	$(CC) -Wall -std=c89 -g $^ -o $@

$(p4s1e6): $(SRCDIR)/part4/section1/ex6.c | $(BUILDDIR)
	$(CC) -Wall -std=c99 -g $^ -o $@

$(p4s1e7): $(SRCDIR)/part4/section1/ex7.c | $(BUILDDIR)
	$(CC) -Wall -std=c89 -g $^ -o $@

$(p4s1e8): $(SRCDIR)/part4/section1/ex8.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4s2e9): $(SRCDIR)/part4/section2/ex9.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4s2e10): $(SRCDIR)/part4/section2/ex10.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4s3e11): $(SRCDIR)/part4/section3/ex11.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4s3e12): $(SRCDIR)/part4/section3/ex12.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4s4e14): $(SRCDIR)/part4/section4/ex14.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4s5e15): $(SRCDIR)/part4/section5/ex15.c | $(BUILDDIR)
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

$(p2proj8): $(SRCDIR)/part2/projects/project8.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3proj1): $(SRCDIR)/part3/projects/project1.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3proj2): $(SRCDIR)/part3/projects/project2.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3proj3): $(SRCDIR)/part3/projects/project3.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3proj4): $(SRCDIR)/part3/projects/project4.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3proj5): $(SRCDIR)/part3/projects/project5.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p3proj6): $(SRCDIR)/part3/projects/project6.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4proj1): $(SRCDIR)/part4/projects/project1.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4proj2): $(SRCDIR)/part4/projects/project2.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4proj3): $(SRCDIR)/part4/projects/project3.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4proj4): $(SRCDIR)/part4/projects/project4.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4proj5): $(SRCDIR)/part4/projects/project5.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(p4proj6): $(SRCDIR)/part4/projects/project6.c | $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $@

# Create build dir
$(BUILDDIR):
	mkdir -p $(BUILDDIR)/part2/section{1,2,4}
	mkdir -p $(BUILDDIR)/part2/projects
	mkdir -p $(BUILDDIR)/part3/section{1,2}
	mkdir -p $(BUILDDIR)/part3/projects
	mkdir -p $(BUILDDIR)/part4/section{1..5}
	mkdir -p $(BUILDDIR)/part4/projects

# Remove build directory
.PHONY=clean
clean:
	rm -r build
