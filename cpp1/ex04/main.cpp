#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	std::ifstream	file;
	std::string		filetext;
	int				found_idx;
	std::string 	argv3;
	std::string		newfile;

	newfile = argv[1];
	newfile += ".replace";
	std::ofstream outfile(newfile);
	found_idx = 0;
	argv3 = argv[3];
	file.open(argv[1]);
	if (file.is_open())
	{
		while (file.good())
			filetext += file.get();
	}
	else
	{
		std::cout << "File can't be opened !" << std::endl;
		return (0);
	}
	found_idx = filetext.find(argv[2], found_idx);
	if (found_idx == -1)
	{
		std::cout << "Nothing has been found !" << std::endl;
		return (0);
	}
	while (found_idx > -1)
	{
		filetext.erase(found_idx, strlen(argv[2]));
		filetext.insert(found_idx, argv3);
		found_idx = filetext.find(argv[2], found_idx + 1);
	}
	outfile << filetext;
	outfile.close();
	file.close();
	return (0);
}