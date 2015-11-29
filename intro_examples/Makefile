CFLAGS += --std=c++11
# CFLAGS += --flibble

TARGETS =  hello_world_1 hello_world_2
TARGETS += print_square unary_plus
TARGETS += complex const_constexpr
TARGETS += loop_accept pointers_arrays_loops
TARGETS += user_types

all: ${TARGETS}

%: %.cpp
	c++ ${CFLAGS} $< -o $@


clean:
	rm -f ${TARGETS}
