#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

void replace(const char * filename, std::string s1, std::string s2) {
	std::string line;
	std::string start;
	std::string end;
	std::string final;
	std::size_t loc;
	std::ifstream file;
	std::ofstream outfile;
	std::string new_file;

	final = "";
	file.open(filename);
	if (file.is_open()) {
		while (std::getline(file, line)) {
			loc = line.find(s1);
			while (loc != std::string::npos) {
				start = line.substr(0, loc);
				end = line.substr(loc + s1.length());
				line = start + s2 + end;
				loc = line.find(s1);
			}
			final += line;
		}
		new_file.append(filename);
		new_file.append(".replace");
		outfile.open(new_file.c_str());
		outfile << final << std::endl;
		outfile.close();
		file.close();
	}
}

int main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "invalid number args" << std::endl;
		return 1;
	}
	replace(av[1], av[2], av[3]);
}
