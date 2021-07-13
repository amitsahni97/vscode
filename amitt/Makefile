SRC=project_main.c\
src/sum.c\
src/sub.c\
src/mul.c\
src/mod.c\
test/test_operations.c\
unity/unity.c\


INC=-Iinc\
-Itest\
-Iunity

#INCLUDE_LIBS=-lcunit

all:$(SRC)
	gcc $(SRC) $(INC) -o amit.exe

clean:
	rm -r *.exe

