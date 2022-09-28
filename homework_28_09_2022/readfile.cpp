#include <iostream>
#include <fstream>

bool isChecked(char ch) {
        if (ch != ' ' && ch != ',' && ch != '\t' && ch != '\0')
                return true;
        return false;
}

int main() {
	std::string str;
	std::ifstream iFile("test.txt");
	if (!iFile.is_open()) {
		 std::cout << "File is not opened";
		 return 0;
	}
	int i;
	while (getline(iFile, str)) {
		i = 0;
		while (str[i] != '\0') {
			if (!isChecked(str[i])) {
				++i;
				continue;
			}
			if (isChecked(str[i]) && !isChecked(str[i + 1])) {
				std::cout << str[i] << std::endl;
				++i;
				continue;
			}
			if (isChecked(str[i])) {
				std::cout << str[i];
				++i;
				continue;
			}
			++i;
		}
	}
	iFile.close();
} 
