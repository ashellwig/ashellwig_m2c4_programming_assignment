# vim: set ts=2 sw=2 ft=sh:
## Module 2 Chapter 4 Program
## Ashton S. Hellwig
## Date: 07 March 2020
## Instructor: Jeffrey Hemmes
## Course:
##   [CSC160] Introduction to Programming Langauges (C++)
##

# --- Variables ---
PROGRAM := out/bin/ashellwig_m2c4_programming_assignment.bin
CXX := /usr/bin/g++
RM := /usr/bin/rm

CXXFLAGS := -c \
	-std=c++2a \
	-Wall \
	-Wextra \
	-ggdb
LFLAGS := -std=c++2a -ggdb

SRC := $(wildcard src/*.cxx)
INCLUDES := include
OBJS := $(addprefix out/obj/, $(notdir $(SRC:.cxx=.o)))

# --- Rules ---
all: debug user-doc-release clean
clean: user-doc-clean
	$(RM) -f out/obj/*.o
clean-all: clean user-doc-clean-all
	$(RM) -f out/bin/*.bin
	$(RM) -f out/bin/*.txt
	$(RM) -f out/doc/user_docs.pdf
# Debug Build
debug: $(OBJS)
	$(CXX) $(LFLAGS) $(OBJS) -o $(PROGRAM)
out/obj/%.o: src/%.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I $(INCLUDES)


# Doc
user-doc-release: user-doc-build user-doc-clean
	cp -R doc/user_docs/main.pdf out/doc/user_docs.pdf
user-doc-build:
	$(MAKE) -C doc/user_docs user-doc-build
user-doc-clean:
	$(MAKE) -C doc/user_docs user-doc-clean
user-doc-clean-all:
	$(MAKE) -C doc/user_docs user-doc-clean-all
