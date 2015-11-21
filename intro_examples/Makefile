CFLAGS += --std=c++11
# CFLAGS += --flibble

TARGETS = complex const_constexpr hello_world_1 hello_world_2 print_square unary_plus

all: ${TARGETS}

%: %.cpp
	c++ ${CFLAGS} $< -o $@


clean:
	rm -f ${TARGETS}
