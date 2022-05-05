source = main.c name.c 
include = fun.h
build : $(source) $(include) 
	gcc $(source) $(include) -o all.out

run : 
	./all.out