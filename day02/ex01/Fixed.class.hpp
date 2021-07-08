#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int						fixedPointValue_;
		static const int		fractionalBits_ = 8;

	public:
					Fixed();
					Fixed(const int d_value);
					Fixed(const float f_value);
					Fixed(const Fixed &copy);
					~Fixed();

		int			getRawBits()const;
		void		setRawBits(int const value);
		
		float		toFloat()const;
		int			toInt()const;

		Fixed&		operator= (const Fixed &other);
};

std::ostream& operator<< (std::ostream& out, Fixed const& value);

#endif