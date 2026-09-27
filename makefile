GCC = g++ 

all:
    $(GCC) map.cpp -o map
	./map

# .PHONY: run