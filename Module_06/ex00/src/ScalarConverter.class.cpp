#include "../include/ScalarConverter.class.hpp"

ScalarConverter::ScalarConverter(void) {
	std::cout << BLACK_ON_GREEN "ScalarConverter default constructor called." RESET << std::endl;
	 return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const & source) {
	std::cout << BLACK_ON_CYAN "ScalarConverter copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

ScalarConverter::~ScalarConverter(void) {
	std::cout << BLACK_ON_RED "ScalarConverter default destructor called." RESET << std::endl;
	return ;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & source) {
	(void)source;
	std::cout << BLACK_ON_WHITE "ScalarConverter assignment operator called." RESET << std::endl;
	return *this;
}


std::ostream & operator<<(std::ostream & out, ScalarConverter & in) {
	(void)in;
	out << "ScalarConverter instance" << std::endl;
	return out;
}

///////////////////////////////////////////////// Converter

static int	is_char(std::string input)
{
	int	n = (int)input[0];

	if (input.size() == 1 && ((n >= 32 && n < 48) || (n >= 58 && n < 127)))
		return (1);
	return (0);
}

static int	is_int(std::string input)
{
	if (input[0] != '-' && (input[0] < '0' || input[0] > '9'))
		return (0);
	for (int i = 1 ; i < (int)input.size(); i++)
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
	}
	return (1);
}

static int	is_float(std::string input)
{
	int	i = 0;

	if (input[i] == '-')
		i++;
	if (input[i] == '.')
		return (0);
	while (input[i] != '.')
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
		if (i == (int)input.size())
			return (0);
	}
	i++;
	if (i == (int)input.size() || input[i] == 'f')
		return (0);
	while (input[i] != 'f')
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
		if (i == (int)input.size())
			return (0);
	}
	i++;
	if (i < (int)input.size())
		return (0);
	return (1);
}

static int	is_double(std::string input)
{
	int	i = 0;

	if (input[i] == '-')
		i++;
	if (input[i] == '.')
		return (0);
	while (input[i] != '.')
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
		if (i == (int)input.size())
			return (0);
	}
	i++;
	if (i == (int)input.size())
		return (0);
	while (i != (int)input.size())
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static void	print_char(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast <int> (c) << std::endl;
	std::cout << "float: "<< static_cast <float> (c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast <double> (c) << ".0" << std::endl;
}

static void	print_int(int n)
{
	if (n >= 32 && n < 127)
		std::cout << "char: '" << static_cast <char> (n) << "'" << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	std::cout << "int: " << n << std::endl;
	if (n < 1000000)
	{
		std::cout << "float: "<< static_cast <float> (n) << ".0f" << std::endl;
		std::cout << "double: " << static_cast <double> (n) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: "<< static_cast <float> (n) << "f" << std::endl;
		std::cout << "double: " << static_cast <double> (n) << std::endl;
	}
}

static void	print_float(float f)
{
	if (static_cast<int>(f) >= 32 && static_cast <int> (f) < 127)
		std::cout << "char: '" << static_cast <char> (f) << "'" << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	if (f > 2147483647 || f < -2147483648)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (f == static_cast<int>(f) && f < 1000000)
	{
		std::cout << "float: "<< f << ".0f" << std::endl;
		std::cout << "double: " << static_cast <double> (f) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: "<< f << "f" << std::endl;
		std::cout << "double: " << static_cast <double> (f) << std::endl;
	}
}

static void	print_double(double d)
{
	if (static_cast<int>(d) >= 32 && static_cast <int> (d) < 127)
		std::cout << "char: '" << static_cast <char> (d) << "'" << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	if (d > 2147483647 || d < -2147483648)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast <int> (d) << std::endl;
	if (d == static_cast<int>(d) && d < 1000000)
	{
		std::cout << "float: "<< static_cast <float> (d) << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: "<< static_cast <float> (d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

static void	print_nan(std::string nan)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (nan == "nanf" || nan == "nan")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (nan == "+inff" || nan == "+inf")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (nan == "-inff" || nan == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

static void	print_inv(void)
{
	std::cout << "char: invalid" << std::endl;
	std::cout << "int: invalid" << std::endl;
	std::cout << "float: invalid" << std::endl;
	std::cout << "double: invalid" << std::endl;
}

void ScalarConverter::convert(std::string const & input) {
	if (is_char(input))
		print_char((int)input[0]);
	else if (is_int(input))
		print_int(atoi(input.c_str()));
	else if (is_float(input))
		print_float(atof(input.c_str()));
	else if (is_double(input))
		print_double(atof(input.c_str()));
	else if (input == "-inff" || input == "+inff" || input == "nanf"
			|| input == "-inf" || input == "+inf" || input == "nan")
		print_nan(input);
	else
		print_inv();
	return ;
}