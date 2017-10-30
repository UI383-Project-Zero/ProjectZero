CC=gcc

KC_objs= KCChooser.o KCCrowdDirector.o

KCLib = inc/KC

all: fss clean

fss: $(KC_objs)
	$(CC) -o $@ $^

KCCrowdDirector.o: src/KC/KCCrowdDirector.cpp
	$(CC) -c -o $@ $^ -I $(KCLib)

KCChooser.o: src/KC/KCChooser.cpp
	$(CC) -c -o $@ $^ -I $(KCLib)

clean:
	rm *.o
