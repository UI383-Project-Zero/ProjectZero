#########Variables
CC=g++

mainLib=inc/

all_objs = main.o $(KC_objs)
####KC Variables
KC_objs= KCChooser.o KCCrowdDirector.o KCAttractionRanker.o
KCLib = inc/KC

#############################Directives
all: fss clean

fss: $(all_objs)
	$(CC) -o $@ $^
test:
	./tst/KC/KCTests

clean:
	rm *.o

######Main
main.o: src/main.cpp
	$(CC) -o $@ -c $^ -I $(mainLib)
######KCDirectives
KCAttractionRanker.o: src/KC/KCAttractionRanker.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCCrowdDirector.o: src/KC/KCCrowdDirector.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCChooser.o: src/KC/KCChooser.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCtest :
	./tst/KC/KCTests
