ROOT_CASE=creational/prototype
EXEC = Prototype
PROJECTDIR = ../../../

CC = g++
CC_FLAGS = -Wall -Wunused -std=c++11

# File names
BUILDDIR=$(PROJECTDIR)/bin/builddir/$(ROOT_CASE)
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# Main target
all: $(EXEC)

$(EXEC): $(OBJECTS)
	@echo "\nCreating $(BUILDDIR) directory..."
	mkdir -p $(BUILDDIR)
	
	@echo "\nCompiling..."
	$(CC) $(BUILDDIR)/*.o -o $(BUILDDIR)/$(EXEC)

# To obtain object files
%.o: %.cpp
	mkdir -p $(BUILDDIR)
	$(CC) -c $(CC_FLAGS) $< -o $(BUILDDIR)/$@

run:
	$(BUILDDIR)/$(EXEC)

# To remove generated files
clean:
	rm -f $(BUILDDIR)/$(EXEC) $(BUILDDIR)/*.o