#ifndef PONY_H
# define PONY_H

# include <iostream>
# include <string>
# include <iomanip>

class Pony {
	private:
		std::string		name_;
		std::string		color_;
		int				age_;

	public:
						Pony();
						Pony(std::string name);
		std::string		getName();
		std::string		getColor();
		int				getAge();
		void			setName(std::string name);
		void			setColor(std::string color);
		void			setAge(int age);

		void			printInfo();
		void			voiceIntroduce();
};

#endif
