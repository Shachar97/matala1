CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIB = advancedClassificationLoop.o basicClassification.o
OBJECTS_R_LIB = advancedClassificationRecursion.o basicClassification.o
FLAGS = -Wall -g

all: loops loopd recursives mains recursived maindloop maindrec

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a -lm
	
maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so -lm

maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so -lm

loops:
libclassloops.a: $(OBJECTS_LIB)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB)


loopd:
libclassloops.so: $(OBJECTS_LIB)
	$(CC) -shared -fPIC -o libclassloops.so $(OBJECTS_LIB)

recursives:
libclassrec.a: $(OBJECTS_R_LIB) 
	$(AR) -rcs libclassrec.a $(OBJECTS_R_LIB)
	
recursived:
libclassrec.so: $(OBJECTS_R_LIB)
	$(CC) -shared -fPIC -o libclassrec.so $(OBJECTS_R_LIB)




advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c


basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c


advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c


main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all 

clean:
	rm -f *.o *.a *.so mains maindloop maindrec