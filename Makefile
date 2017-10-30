#########Variables
CC=g++

mainLib=inc/

all_objs = main.o $(KC_objs) $(CP_objs)
####KC Variables
KC_objs= KCChooser.o KCCrowdDirector.o KCAttractionRanker.o
KCLib = inc/KC

####PC Variables
CP_objs= dailyReport.o monthlyReport.o report.o weeklyreport.o
CPLib = inc/CP
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

#######CPDirectives
dailyReport.o : src/CP/dailyReport.cpp
	$(CC) -o $@ -c $^ -I $(CPLib)

monthlyReport.o : src/CP/monthlyReport.cpp
	$(CC) -o $@ -c $^ -I $(CPLib)

report.o : src/CP/report.cpp
	$(CC) -o $@ -c $^ -I $(CPLib)

weeklyReport.o : src/CP/weeklyReport.cpp
	$(CC) -o $@ -c $^ -I $(CPLib)


