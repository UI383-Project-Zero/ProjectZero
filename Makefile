#########Variables
CC=g++

####KC Variables
KC_objs= KCChooser.o KCCrowdDirector.o KCAttractionRanker.o
KCLib = inc/KC

#############################Directives
all: fss clean

fss: $(KC_objs)
	$(CC) -o $@ $^

test:
	./tst/KC/KCTests

clean:
	rm *.o

######KCDirectives
KCAttractionRanker.o: src/KC/KCAttractionRanker.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCCrowdDirector.o: src/KC/KCCrowdDirector.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCChooser.o: src/KC/KCChooser.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCtest :
	./tst/KC/KCTests
