CXX = g++

TARGETS = main
CLFLAG = -std=c++23 -Iinclude -O2 -Wall

%:
	@rm -rf out/main
	@rm -rf prebuild/leetcode$*.o
	@$(CXX) $(CLFLAG) -c src/leetcode$*.cpp -o prebuild/leetcode$*.o
	@$(CXX) $(CLFLAG) -c main.cpp -o prebuild/main.o
	@$(CXX) $(CLFLAG) ./prebuild/main.o ./prebuild/leetcode$*.o -o ./out/main
	@./out/main

test:
	@rm -rf out/main
	@rm -rf prebuild/test.o
	@$(CXX) $(CLFLAG) -c src/test.cpp -o prebuild/test.o
	@$(CXX) $(CLFLAG) -c main.cpp -o prebuild/main.o
	@$(CXX) $(CLFLAG) ./prebuild/main.o ./prebuild/test.o -o ./out/main

# Run test
	./out/main