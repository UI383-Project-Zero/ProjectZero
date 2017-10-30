#########Variables
CC=g++

mainLib=inc/

all_objs = main.o $(SA_objs) $(KC_objs) $(CP_objs) $(PV_objs)

##Test Variables
test_objs = tests-main.o KCTests.o SATests.o PVTests.o
tstLib = tst/Catch
####SA Variables
SA_objs= population.o #customer.o PopulationConfiguration.o
SALib = inc/SA
SASrc = src/SA
####KC Variables
KC_objs= KCChooser.o KCCrowdDirector.o KCAttractionRanker.o
KCLib = inc/KC
KCSrc = src/KC
####CP Variables
CP_objs= dailyReport.o monthlyReport.o report.o weeklyReport.o
CPLib = inc/CP

####PV Variables
PV_objs= OpenWeather.o OpenWeatherFactory.o
PVLib = inc/PV
PVSrc = src/PV
#############################Directives
all: fss clean_intermediates
	./fss

fss: $(all_objs)
	$(CC) -o $@ $^

test: test_build
	./run_tests

clean:
	rm *.o
	rm run_tests

clean_intermediates:
	rm *.o

######Main
main.o: src/main.cpp
	$(CC) -o $@ -c $^ -I $(mainLib)

######Tests
test_build: $(test_objs)
	$(CC) -o run_tests $^
	clean_intermediates

tests-main.o: tst/Catch/tests-main.cpp
	$(CC) -o $@ -c $^ -I $(tstLib)
######SADirectives
customer.o: src/SA/customer.o
	$(CC) -o $@ -c $^ -I $(SALib)

population.o: src/SA/population.cpp
	$(CC) -o $@ -c $^ -I $(SALib)

PopulationConfiguration.o: src/SA/PopulationConfiguration.cpp
	$(CC) -o $@ -c $^ -I $(SALib)

SATests.o: tst/SA/test.cpp
	$(CC) -o $@ -c $^ -I $(tstLib) $(SALib) $(SASrc)

SATest_build: tests-main.o SATests.o
	$(CC) -o run_SAtests $^

SATest: SATest_build
	./run_SAtests
######KCDirectives
KCAttractionRanker.o: src/KC/KCAttractionRanker.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCCrowdDirector.o: src/KC/KCCrowdDirector.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCChooser.o: src/KC/KCChooser.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCTests.o: tst/KC/KCTests.cpp
	$(CC) -o $@ -c $^ -I $(KCLib) $(KCSrc) $(tstLib)

KCTest_build: tests-main.o KCTests.o
	$(CC) -o run_KCtests $^

KCTest: KCTest_build
	./run_KCtests
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

PVTests.o: tst/PV/PatTest.cpp
	$(CC) -o $@ -c $^ -I $(PVLib) $(PVSrc) $(tstLib)

PVTest_build: tests-main.o PVTests.o
	$(CC) -o run_PVtests $^

PVTest: PVTest_build
	./run_PVtests
