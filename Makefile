CC=gcc

KC_objs= KCChooser.o KCCrowdDirector.o KCAttractionRanker.o

KCLib = inc/KC

all: fss clean

fss: $(KC_objs)
	$(CC) -o $@ $^

KCAttractionRanker.o: src/KC/KCAttractionRanker.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCCrowdDirector.o: src/KC/KCCrowdDirector.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCChooser.o: src/KC/KCChooser.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

clean:
	rm *.o
