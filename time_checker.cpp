#include <iostream>

#include <chrono>

int fib(int n){
	if(n<=1){
		return n;
	}
	return fib(n-2)+fib(n-1);
}

int main() {

auto start = std::chrono::high_resolution_clock::now();

// code to measure
fib(7);

auto end = std::chrono::high_resolution_clock::now();

auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

std::cout << "Execution time: " << duration << " ms" << std::endl;

return 0;

}
