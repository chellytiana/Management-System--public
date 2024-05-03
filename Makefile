# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -g

# Source files
SRCS = main.cpp file1.cpp file2.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = myprogram

# Default target
all: $(EXEC)

# Compile source files into object files
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Link object files into the executable
$(EXEC): $(OBJS)
    $(CXX) $(CXXFLAGS) $^ -o $@

# Clean up generated files
clean:
    rm -f $(OBJS) $(EXEC)
