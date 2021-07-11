output : main.o ascend.o descend.o
	gcc  main.c ascend.c descend.c -o output
main.o : main.c
	gcc -c main.c
ascend.o : ascend.c
	gcc -c ascend.c
descend.o : descend.c
	gcc -c descend.c
clean :
	rm *.o main