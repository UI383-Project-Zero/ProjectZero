#########Variables
CC=g++

mainLib=inc/

all_objs = main.o $(SA_objs) $(KC_objs) $(CP_objs) $(PV_objs)

##Test Variables
test_objs = tst/Catch/tests-main.o SATests.o PVTests.o # CPTests.o JTTests.o KCTests.o
test_exe = run_tests runSA_tests ruKC_tests runPV_tests runJT_tests
tstLib = tst/Catch
####SA Variables
SA_objs= population.o customer.o PopulationConfiguration.o
SALib = inc/SA
SASrc = src/SA
####KC Variables
KC_objs= KCChooser.o KCCrowdDirector.o KCAttractionRanker.o
KCLib = inc/KC
KCSrc = src/KC
####CP Variables
CP_objs= dailyReport.o monthlyReport.o report.o weeklyReport.o
CPLib = inc/CP
CPSrc = src/CP
####PV Variables
PV_objs= OpenWeather.o OpenWeatherFactory.o
PVLib = inc/PV
PVSrc = src/PV
####JT Variables
JT_objs = Vendor.o Ride.o
JTLib = inc/JT
JTSrc = src/JT
#############################Directives
all: fss clean
	./fss

fss: $(all_objs)
	$(CC) -o $@ $^

test: test_build clean
	./run_tests

clean:
	rm *.o

clean_exe:
	rm fss $(test_exe)

clean_all: clean clean_exe
######Main
main.o: src/main.cpp
	$(CC) -o $@ -c $^ -I $(mainLib)

######Tests
test_build: $(test_objs)
	$(CC) -o run_tests $^

tst/Catch/tests-main.o: tst/Catch/tests-main.cpp
	$(CC) -o $@ -c $^ -I $(tstLib)
######SADirectives
customer.o: src/SA/customer.cpp
	$(CC) -o $@ -c $^ -I $(SALib)

population.o: src/SA/population.cpp
	$(CC) -o $@ -c $^ -I $(SALib)

PopulationConfiguration.o: src/SA/PopulationConfiguration.cpp
	$(CC) -o $@ -c $^ -I $(SALib)

SATests.o: tst/SA/test.cpp
	$(CC) -o $@ -c $^ -I $(tstLib) -I $(SALib) -I $(SASrc)

SATest_build: tst/Catch/tests-main.o SATests.o
	$(CC) -o run_SAtests $^

SATest: SATest_build clean
	./run_SAtests
######KCDirectives
KCAttractionRanker.o: src/KC/KCAttractionRanker.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCCrowdDirector.o: src/KC/KCCrowdDirector.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCChooser.o: src/KC/KCChooser.cpp
	$(CC) -o $@ -c $^ -I $(KCLib)

KCTests.o: tst/KC/KCTests.cpp
	$(CC) -o $@ -c $^ -I $(KCLib) -I $(KCSrc) -I $(tstLib)

KCTest_build: tst/Catch/tests-main.o KCTests.o
	$(CC) -o run_KCtests $^ 

KCTest: KCTest_build clean
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

CPTests.o: tst/CP/CPTests.cpp
	$(CC) -o $@ -c $^ -I $(CPLib) -I $(CPSrc) -I $(tstLib)

CPTest_build: tst/Catch/tests-main.o CPTests.o
	$(CC) -o run_CPtests $^

CPTest: CPTest_build clean
	./run_CPtests

######PVDirectives
OpenWeather.o : src/PV/OpenWeather.cpp
	$(CC) -o $@ -c $^ -I $(PVLib)

OpenWeatherFactory.o : src/PV/OpenWeatherFactory.cpp
	$(CC) -o $@ -c $^ -I $(PVLib)

PVTests.o: tst/PV/PatTest.cpp
	$(CC) -o $@ -c $^ -I $(PVLib) -I $(PVSrc) -I $(tstLib)

PVTest_build: tst/Catch/tests-main.o PVTests.o
	$(CC) -o run_PVtests $^

PVTest: PVTest_build clean
	./run_PVtests
######JTDirectives
Ride.o : src/JT/Ride.cpp
	$(CC) -o $@ -c $^ -I $(JTLib)

Vendor.o : src/JT/Vendor.cpp
	$(CC) -o $@ -c $^ -I $(JTLib)

JTTests.o: tst/JT/JTTests.cpp	
	$(CC) -o $@ -c $^ -I $(JTLib) -I $(JTSrc) -I $(tstLib)

JTTest_build: tst/Catch/tests-main.o JTTests.o
	$(CC) -o run_JTTests $^

JTTest: JTTest_build clean
	./run_JTTests

