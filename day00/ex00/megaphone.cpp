#include <iostream>
#include <string>

std::string toUpper(std::string str) {
	for (std::string::size_type i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
	return str;
}

int	main(int ac, char **av) {
	std::string strUpper;

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int i = 1; i < ac; i++) {
			strUpper = toUpper(av[i]);
			std::cout << strUpper;
			if ((i + 1) < ac) {
				std::cout << " ";
			}
		}
	}
	std::cout << std::endl;
	
	return 0;
}
