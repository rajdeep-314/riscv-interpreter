dir = interpreter
main = $(dir)/main.c
files = $(dir)/reg.c \
		$(dir)/commands.c \
		$(dir)/instructions.c

headers = $(dir)/reg.h \
	  $(dir)/commands.h \
	  $(dir)/instructions.h

exec = interpreter/interpreter.out


# for actual building

build:		$(main)  $(files)  $(headers)
	gcc $(main) $(files) -o $(exec) -Wall

run:		build
	./$(exec)

clean:
	rm -f $(exec)



# for testing

test = $(dir)/test.c
testexec = $(dir)/test.out

testcompile:	$(test)  $(files)  $(headers)
	gcc $(test) $(files) -o $(testexec) -Wall

test:		testcompile
	./$(testexec)

testclean:
	rm -f $(testexec)

