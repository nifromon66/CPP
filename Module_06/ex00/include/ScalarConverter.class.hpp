#ifndef SCALARCONVERTER_CLASS_HPP
# define SCALARCONVERTER_CLASS_HPP


# include <iostream>
# include <string>
# include <exception>
# include <limits>
# include <iomanip>
# include <cmath>
# include <sstream>
# include <cctype>
# include "Colors.hpp"

class ScalarConverter {
	public:
			static void	convert(std::string const & input);
	private:
			ScalarConverter(void);
			ScalarConverter(ScalarConverter const & source);
			~ScalarConverter(void);
			ScalarConverter & operator=(ScalarConverter const & source);
};


#endif