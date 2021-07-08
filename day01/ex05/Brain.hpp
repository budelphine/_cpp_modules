#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>

class Brain {
	private:
		std::string			identify_;

	public:
		Brain();

		std::string			identify()const;
		std::string			getIdentify()const;
};

#endif
