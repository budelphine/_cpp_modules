#include <iostream>
#include <string>
#include <fstream>

int	printError(std::string strError, int exitCode)
{
	std::cerr << strError << std::endl;
	return exitCode;
}

int	sedForLosers(std::string inputFileName, std::string outputFileName, std::string fromReplace, std::string toReplace)
{
	std::string		replacedOutput;
	std::ifstream	inputStream(inputFileName);
	std::ofstream	outputStream(outputFileName);

	if (!outputStream.is_open())
		return printError("Can't create OutputFile. Please, try again.", 1);
	
	int		i;
	int		fromReplaceLen = fromReplace.length();
	int		toReplaceLen = toReplace.length();
	while (std::getline(inputStream, replacedOutput))
	{
		i = 0;
		while (i != -1)
		{
			i = replacedOutput.find(fromReplace, i);
			if ((size_t)i != std::string::npos)
			{
				replacedOutput.replace(i, fromReplaceLen, toReplace);
				i += toReplaceLen;
			}
		}
		outputStream << replacedOutput;
		if (!inputStream.eof())
			outputStream << std::endl;
	}

	inputStream.close();
	outputStream.close();
	return 0;
}

int main(int ac, char **av)
{
	std::cout << "Welcome to ex07 - Sed is for losers" << std::endl;

	if (ac != 4)
		return printError("Incorrect param. Please, try again.", 1);

	std::ifstream	fs;
	std::string		inputFile = av[1];

	fs.open(inputFile);
	if (!fs.is_open())
		return printError("Incorrect param. Please, try again.", 1);
	fs.close();
	
	std::string		outputFile;
	outputFile = inputFile + ".replaced";

	std::string		fromReplace = av[2];
	std::string		toReplace = av[3];

	if (fromReplace.length() == 0)
		return printError("Symbol to replace can't be void. Please, try again.", 1);

	int res;
	res = sedForLosers(inputFile, outputFile, fromReplace, toReplace);
	return res;
}
