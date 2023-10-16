GCC = gcc -Wall -Wextra -Werror -std=c11 #-fsanitize=address -g
GCC_NOASAN = gcc -c -Wall -Wextra -Werror -std=c11 -g
COVERAGE_FLAG = -MD -fprofile-arcs -ftest-coverage
all: Smart_calc.a 
target_2: clean Smart_calc.a test gcov_report
Smart_calc.a:
	$(GCC_NOASAN) Smart_calc.c -o Smart_calc.o
	ar rcs Smart_calc.a Smart_calc.o
	ranlib Smart_calc.a
test: Smart_calc.a
	$(GCC) $(COVERAGE_FLAG) Smart_calc.a tests.c -lcheck -lm -lpthread -lgcov -o test
	$(GCC) $(COVERAGE_FLAG) Smart_calc.c Smart_calc.a tests.c -lcheck -lm -lpthread -lgcov -o test	
	./test
	leaks -atExit -- test
gcov_report:
	gcov -a -f Smart_calc.gcda
	gcovr --html-details -o report.html

clean:
	rm -rf *.o *.a *.css index.html *.gcno *.gcda *.out *.info test report.* *.dSYM *.gcov build *.gch SmartCalc_dist Smart_calc.tar.gz
check: 
	cp ../materials/linters/.clang-format ../src/.clang-format
	clang-format -n *.c   *.h
	clang-format -n Smart_calculator_Qt/untitled/*.cpp  *.h
#	cppcheck --enable=all --force *.c *.h

#generatedvi:
#	cd doxygen && ./doxygen Doxyfile

dvi:
	open ./doxygen/html/index.html

# install:
# 	@mkdir build
# 	cd build; cmake ..; cmake --build .


install:
	cd Smart_calculator_Qt/untitled && cmake . && $(MAKE) all

run:
	open Smart_calculator_Qt/untitled/untitled.app

uninstall:
	rm -rf build

 
dist: 
	@mkdir Smart_calc_dist
	cp *.c Smart_calc_dist
	cp *.h Smart_calc_dist
	cp Smart_calculator_Qt/untitled/CMakeLists.txt.user Smart_calc_dist
#	cp *.txt Smart_calc_dist
	cp Smart_calculator_Qt/untitled/*.cpp Smart_calc_dist
	cp Smart_calculator_Qt/untitled/*.ui Smart_calc_dist
	cp Makefile Smart_calc_dist
	tar -czf Smart_calc.tar.gz Smart_calc_dist/
	rm -rf Smart_calc_dist



