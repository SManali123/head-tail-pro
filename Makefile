project.o: tail.c
	cc  -c tail.c
	cc tail.o -o project
