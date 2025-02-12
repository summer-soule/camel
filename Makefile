BUILDDIR=build
SRCDIR=src

CC=/usr/bin/gcc
CFLAGS99=-Wall -std=c99 -g
CFLAGS89=-Wall -std=c89 -g

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

p5s1e1=$(BUILDDIR)/part5/section1/ex1
p5s1e2=$(BUILDDIR)/part5/section1/ex2
p5s1e3=$(BUILDDIR)/part5/section1/ex3
p5s1e4=$(BUILDDIR)/part5/section1/ex4

p5s2e5=$(BUILDDIR)/part5/section2/ex5
p5s2e6=$(BUILDDIR)/part5/section2/ex6
p5s2e7=$(BUILDDIR)/part5/section2/ex7
p5s2e8=$(BUILDDIR)/part5/section2/ex8
p5s2e9=$(BUILDDIR)/part5/section2/ex9

p5s3e10=$(BUILDDIR)/part5/section3/ex10
p5s3e11=$(BUILDDIR)/part5/section3/ex11

p6s1e1=$(BUILDDIR)/part6/section1/ex1

p6s2e2=$(BUILDDIR)/part6/section2/ex2

p6s3e3=$(BUILDDIR)/part6/section3/ex3
p6s3e4=$(BUILDDIR)/part6/section3/ex4
p6s3e5=$(BUILDDIR)/part6/section3/ex5
p6s3e6=$(BUILDDIR)/part6/section3/ex6
p6s3e7=$(BUILDDIR)/part6/section3/ex7
p6s3e8=$(BUILDDIR)/part6/section3/ex8
p6s3e9=$(BUILDDIR)/part6/section3/ex9

p6s4e10=$(BUILDDIR)/part6/section4/ex10
p6s4e11=$(BUILDDIR)/part6/section4/ex11
p6s4e12=$(BUILDDIR)/part6/section4/ex12

p6s5e13=$(BUILDDIR)/part6/section5/ex13
p6s5e14=$(BUILDDIR)/part6/section5/ex14

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

p5proj1=$(BUILDDIR)/part5/projects/project1
p5proj2=$(BUILDDIR)/part5/projects/project2
p5proj3=$(BUILDDIR)/part5/projects/project3
p5proj4=$(BUILDDIR)/part5/projects/project4
p5proj5=$(BUILDDIR)/part5/projects/project5
p5proj6=$(BUILDDIR)/part5/projects/project6
p5proj7=$(BUILDDIR)/part5/projects/project7
p5proj8=$(BUILDDIR)/part5/projects/project8
p5proj9=$(BUILDDIR)/part5/projects/project9
p5proj10=$(BUILDDIR)/part5/projects/project10
p5proj11=$(BUILDDIR)/part5/projects/project11

p6proj1=$(BUILDDIR)/part6/projects/project1
p6proj2=$(BUILDDIR)/part6/projects/project2

# Targets
PART2 = $(p2s1e1) $(p2s2e2) $(p2s2e3) $(p2s2e4) $(p2proj1) $(p2proj2) $(p2proj3) $(p2proj4) $(p2proj5) $(p2proj6) $(p2proj7) $(p2proj8)
PART3 = $(p3s1e1) $(p3s1e2) $(p3s2e4) $(p3s2e5) $(p3s2e6) $(p3proj1) $(p3proj2) $(p3proj3) $(p3proj4) $(p3proj5) $(p3proj6)
PART4 =  $(p4s1e1) $(p4s1e2) $(p4s1e3) $(p4s1e4) $(p4s1e5) $(p4s1e6) $(p4s1e7) $(p4s1e8) $(p4s2e9) $(p4s2e10) $(p4s3e11) $(p4s3e12) $(p4s4e14) $(p4s5e15) $(p4proj1) $(p4proj2) $(p4proj3) $(p4proj4) $(p4proj5) $(p4proj6)
PART5 = $(p5s1e1) $(p5s1e2) $(p5s1e3) $(p5s1e4) $(p5s2e5) $(p5s2e6) $(p5s2e7) $(p5s2e8) $(p5s2e9) $(p5s3e10) $(p5s3e11) $(p5proj1) $(p5proj2) $(p5proj3) $(p5proj4) $(p5proj5) $(p5proj6) $(p5proj7) $(p5proj8) $(p5proj9) $(p5proj10) $(p5proj11)
PART6 = $(p6s1e1) $(p6s2e2) $(p6s3e3) $(p6s3e4) $(p6s3e5) $(p6s3e6) $(p6s3e7) $(p6s3e8) $(p6s3e9) $(p6s4e10) $(p6s4e11) $(p6s4e12) $(p6s5e13) $(p6s5e14) $(p6proj1) $(p6proj2)

.PHONY=all
all: $(PART2) $(PART3) $(PART4) $(PART5) $(PART6)

# Building rules for exercises
$(p2s1e1): $(SRCDIR)/part2/section1/ex1.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p2s2e2): $(SRCDIR)/part2/section2/ex2.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p2s2e3): $(SRCDIR)/part2/section4/ex3.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p2s2e4): $(SRCDIR)/part2/section4/ex4.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3s1e1): $(SRCDIR)/part3/section1/ex1.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3s1e2): $(SRCDIR)/part3/section1/ex2.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3s2e4): $(SRCDIR)/part3/section2/ex4.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3s2e5): $(SRCDIR)/part3/section2/ex5.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3s2e6): $(SRCDIR)/part3/section2/ex6.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p4s1e1): $(SRCDIR)/part4/section1/ex1.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p4s1e2): $(SRCDIR)/part4/section1/ex2.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p4s1e3): $(SRCDIR)/part4/section1/ex3.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p4s1e4): $(SRCDIR)/part4/section1/ex4.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p4s1e5): $(SRCDIR)/part4/section1/ex5.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p4s1e6): $(SRCDIR)/part4/section1/ex6.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p4s1e7): $(SRCDIR)/part4/section1/ex7.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p4s1e8): $(SRCDIR)/part4/section1/ex8.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p4s2e9): $(SRCDIR)/part4/section2/ex9.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p4s2e10): $(SRCDIR)/part4/section2/ex10.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p4s3e11): $(SRCDIR)/part4/section3/ex11.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p4s3e12): $(SRCDIR)/part4/section3/ex12.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p4s4e14): $(SRCDIR)/part4/section4/ex14.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p4s5e15): $(SRCDIR)/part4/section5/ex15.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s1e1): $(SRCDIR)/part5/section1/ex1.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s1e2): $(SRCDIR)/part5/section1/ex2.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s1e3): $(SRCDIR)/part5/section1/ex3.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s1e4): $(SRCDIR)/part5/section1/ex4.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s2e5): $(SRCDIR)/part5/section2/ex5.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s2e6): $(SRCDIR)/part5/section2/ex6.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s2e7): $(SRCDIR)/part5/section2/ex7.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s2e8): $(SRCDIR)/part5/section2/ex8.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s2e9): $(SRCDIR)/part5/section2/ex9.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s3e10): $(SRCDIR)/part5/section3/ex10.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p5s3e11): $(SRCDIR)/part5/section3/ex11.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s1e1): $(SRCDIR)/part6/section1/ex1.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s2e2): $(SRCDIR)/part6/section2/ex2.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s3e3): $(SRCDIR)/part6/section3/ex3.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s3e4): $(SRCDIR)/part6/section3/ex4.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s3e5): $(SRCDIR)/part6/section3/ex5.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s3e6): $(SRCDIR)/part6/section3/ex6.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s3e7): $(SRCDIR)/part6/section3/ex7.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s3e8): $(SRCDIR)/part6/section3/ex8.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s3e9): $(SRCDIR)/part6/section3/ex9.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s4e10): $(SRCDIR)/part6/section4/ex10.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s4e11): $(SRCDIR)/part6/section4/ex11.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s4e12): $(SRCDIR)/part6/section4/ex12.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s5e13): $(SRCDIR)/part6/section5/ex13.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

$(p6s5e14): $(SRCDIR)/part6/section5/ex14.c | $(BUILDDIR)
	$(CC) $(CFLAGS89) $^ -o $@

# Building rules for projects
$(p2proj1): $(SRCDIR)/part2/projects/project1.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p2proj2): $(SRCDIR)/part2/projects/project2.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p2proj3): $(SRCDIR)/part2/projects/project3.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@ -lm

$(p2proj4): $(SRCDIR)/part2/projects/project4.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p2proj5): $(SRCDIR)/part2/projects/project5.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@ -lm

$(p2proj6): $(SRCDIR)/part2/projects/project6.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p2proj7): $(SRCDIR)/part2/projects/project7.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p2proj8): $(SRCDIR)/part2/projects/project8.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3proj1): $(SRCDIR)/part3/projects/project1.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3proj2): $(SRCDIR)/part3/projects/project2.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3proj3): $(SRCDIR)/part3/projects/project3.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3proj4): $(SRCDIR)/part3/projects/project4.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3proj5): $(SRCDIR)/part3/projects/project5.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p3proj6): $(SRCDIR)/part3/projects/project6.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p4proj1): $(SRCDIR)/part4/projects/project1.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p4proj2): $(SRCDIR)/part4/projects/project2.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p4proj3): $(SRCDIR)/part4/projects/project3.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p4proj4): $(SRCDIR)/part4/projects/project4.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p4proj5): $(SRCDIR)/part4/projects/project5.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p4proj6): $(SRCDIR)/part4/projects/project6.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p5proj1): $(SRCDIR)/part5/projects/project1.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p5proj2): $(SRCDIR)/part5/projects/project2.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p5proj3): $(SRCDIR)/part5/projects/project3.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p5proj4): $(SRCDIR)/part5/projects/project4.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p5proj5): $(SRCDIR)/part5/projects/project5.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p5proj6): $(SRCDIR)/part5/projects/project6.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@
	
$(p5proj7): $(SRCDIR)/part5/projects/project7.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p5proj8): $(SRCDIR)/part5/projects/project8.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p5proj9): $(SRCDIR)/part5/projects/project9.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p5proj10): $(SRCDIR)/part5/projects/project10.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p5proj11): $(SRCDIR)/part5/projects/project11.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p6proj1): $(SRCDIR)/part6/projects/project1.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

$(p6proj2): $(SRCDIR)/part6/projects/project2.c | $(BUILDDIR)
	$(CC) $(CFLAGS99) $^ -o $@

# Create build dir
$(BUILDDIR):
	mkdir -p $(BUILDDIR)/part2/section{1,2,4}
	mkdir -p $(BUILDDIR)/part2/projects
	mkdir -p $(BUILDDIR)/part3/section{1,2}
	mkdir -p $(BUILDDIR)/part3/projects
	mkdir -p $(BUILDDIR)/part4/section{1..5}
	mkdir -p $(BUILDDIR)/part4/projects
	mkdir -p $(BUILDDIR)/part5/section{1..3}
	mkdir -p $(BUILDDIR)/part5/projects
	mkdir -p $(BUILDDIR)/part6/section{1..5}
	mkdir -p $(BUILDDIR)/part6/projects

# Remove build directory
.PHONY=clean
clean:
	rm -r build
