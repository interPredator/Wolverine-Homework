#include <iostream>
#include <fstream>

bool isChecked(char ch);

int main() {
	int i;
	std::string str;
	std::ifstream iFile("test.txt");
	if (!iFile.is_open()) { std::cout << "File is not opened"; return 0; }
	while (getline(iFile, str)) {
		i = 0;
		while (str[i]) {
			if (isChecked(str[i]) && !isChecked(str[i + 1])) {
				std::cout << str[i] << std::endl;
			} else if (isChecked(str[i])) {
				std::cout << str[i];
			}
			++i;
		}
	}
	iFile.close();
} 

bool isChecked(char ch) {
	return (ch != ' ' && ch != ',' && ch != '\t' && ch != '\0');
}
