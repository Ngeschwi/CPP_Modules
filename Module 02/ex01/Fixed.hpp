#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					nbr;
		const static int	nbr_bits;

	public:
		Fixed(void);
		Fixed(const int	nbr);
		Fixed(const float	nbr);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &	operator=(Fixed const & rhs);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif