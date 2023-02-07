SOURCES = $(shell find . -type f -name '*cpp')
HEADERS = $(shell find . -type f -name '*hpp')
OBJECTS = $(SOURCES:.cpp=.o)


.PHONY: sl-math run clean debug

sl-math: $(OBJECTS) $(HEADERS)
	g++ $^ -o $@

run: sl-math
	./$<

clean:
	rm -rf $(OBJECTS)
	rm -f sl-math

debug: sl-math
	gdb ./$<

%.o: %.cpp
	g++ -c $< -o $@
