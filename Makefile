build: fsoft_t.c ftel_t.c bosch_t.c vnpt_t.c lg_t.c command.c main.c unit_test.c
	gcc fsoft_t.c ftel_t.c bosch_t.c vnpt_t.c lg_t.c command.c main.c -o main.exe
	gcc fsoft_t.c ftel_t.c bosch_t.c vnpt_t.c lg_t.c command.c unit_test.c -o unit_test.exe

run: 
	main.exe