#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Colors.hpp"

class Bureaucrat {
	public:
								Bureaucrat();
								Bureaucrat(const std::string name, int grade);
								Bureaucrat(Bureaucrat const & source);
								~Bureaucrat();
			Bureaucrat &		operator=(Bureaucrat const & source);

			const std::string &	getName(void) const;
			int const &			getGrade(void) const;
			void				upGrade(void);
			void				downGrade(void);
	private:
			const std::string	_name;
			int					_grade;
			class _GradeTooHighException : public std::exception {
				public:
						virtual const char * what() const throw();
			};
			class _GradeTooLowException : public std::exception {
				public:
						virtual const char * what() const throw();
			};
			friend std::ostream &	operator<<(std::ostream & out, Bureaucrat const & in);
};

#endif /* BUREAUCRAT_CLASS_HPP */
