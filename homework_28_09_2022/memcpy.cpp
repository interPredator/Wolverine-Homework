#include <iostream>

void memcpy(void* src, void* dest, size_t count) {
	char* pSrc = (char*)src;
	char* pDest = (char*)dest;
	for ( ; count > 0; ) {
		pDest[count - 1] = pSrc[count - 1]; 
		--count;
	}
}



int main() {
	char src[] = "hello";
	char dest[] = "barev";
	memcpy(src, dest, 5);
	std::cout << dest;
}
