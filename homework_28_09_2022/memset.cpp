#include <iostream>

void memset(void* ptr, char val, size_t count) {
	char* pt = (char*)ptr;
	while(count) {
		*pt = val;
		++pt;
		--count;
	}
}

int main() {
	char str[] = "hello";
	memset(str, 'b', 5);
	std::cout << str;
}
