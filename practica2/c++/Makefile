PROG:=main
SRCS:=main.cc programa.cc progSuma.cc progCuenta.cc progFactorial.cc read.cc write.cc suma.cc push.cc dup.cc jumpif.cc over.cc swp.cc mul.cc

CXX:= g++ -march=native -O3

OBJS:=$(SRCS:.cc=.o)
DEPS:=$(SRCS:.cc=.d)

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $(OBJS)

.cc.o:
	$(CXX) -c -MMD $<

edit:
	geany -i -s *.h *.cc &

clean:
	@rm -f $(PROG) $(OBJS) $(DEPS) core *.s

# Dependencias
-include $(DEPS)
