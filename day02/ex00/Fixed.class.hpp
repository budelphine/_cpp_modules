#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <iomanip>

class Fixed {
	private:
		int						fixedPointValue_;
		static const int		fractionalBits_ = 8;

	public:
		Fixed();
		Fixed(int fixedPointValue);
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed&		operator=(const Fixed &other);
		
		int			getRawBits()const;
		void		setRawBits(int const value);
};

#endif