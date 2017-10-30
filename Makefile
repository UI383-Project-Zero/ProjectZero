#########Variables
CC=g++

mainLib=inc/

all_objs = main.o $(KC_objs) $(CP_objs) $(PV_objs)
####KC Variables
KC_objs= KCChooser.o KCCrowdDirector.o KCAttractionRanker.o
KCLib = inc/KC

####CP Variables
CP_objs= dailyReport.o monthlyReport.o report.o weeklyReport.o
CPLib = inc/CP

####PV Variables
PV_objs= OpenWeather.o OpenWeatherFactory.o
PVLib = inc/PV
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

######PVDirectives
OpenWeather.o : src/PV/OpenWeather.cpp
	$(CC) -o $@ -c $^ -I $(PVLib)

OpenWeatherFactory.o : src/PV/OpenWeatherFactory.cpp
	$(CC) -o $@ -c $^ -I $(PVLib)



