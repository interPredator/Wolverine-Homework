#include <iostream>
#include <fstream>

int main() {
	std::string str;
	std::ifstream iFile("test.txt");
	if (!iFile.is_open()) {
		 std::cout << "File is not opened";
		 return 0;
	}
	while (getline(iFile, str)) {
		int i = 0;
		while (str[i] != '\0') {
			if (str[i] == ' ' || str[i] == ',') {
				++i;
				continue;
			}
			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == ',' || str[i + 1] == '\0')) {
				std::cout << str[i] << std::endl;
				++i;
				continue;
			}
			if (str[i] != ' ' || str[i] != ',') {
				std::cout << str[i];
				++i;
				continue;
			}
			++i;
		}
	}
	iFile.close();
} 
