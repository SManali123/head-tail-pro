project.o: head.c
	cc  -c head.c
	cc head.o -o project
