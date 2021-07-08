#ifndef HEDGEHOG_H
# define HEDGEHOG_H

# include "Victim.hpp"

class Hedgehog : public Victim
{
	private:
					Hedgehog();
		
	public:
					Hedgehog(std::string name);
					Hedgehog(const Hedgehog &copy);
		virtual		~Hedgehog();

		Hedgehog&	operator= (const Hedgehog &other);

		void			getPolymorphed()const;
		void			introduce()const;
};

std::ostream& operator<< (std::ostream& out, Hedgehog const& Hedgehog);

#endif