#ifndef HUMAN_H
# define HUMAN_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Brain.hpp"

class Human {
	private:
		const Brain				brain;

	public:
		Human();
		
		std::string			identify()const;
		const Brain			&getBrain()const;
};

#endif
