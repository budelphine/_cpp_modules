#ifndef PEON_H
# define PEON_H

# include "Victim.hpp"

class Peon : public Victim
{
	private:
					Peon();
		
	public:
					Peon(std::string name);
					Peon(const Peon &copy);
		virtual		~Peon();

		Peon&	operator= (const Peon &other);

		void			getPolymorphed()const;
		void			introduce()const;
};

std::ostream& operator<< (std::ostream& out, Peon const& Peon);

#endif