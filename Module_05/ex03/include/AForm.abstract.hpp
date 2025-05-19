/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 06:29:06 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 08:27:46 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_ABSTRACT_HPP
# define AFORM_ABSTRACT_HPP

# define SHRUBBERY		"shrubbery creation"
# define ROBOTOMY		"robotomy request"
# define PRESIDENTIAL	"presidential pardon"

# include "Bureaucrat.class.hpp"
# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include "Colors.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm(void);
		AForm(std::string const & name, int SignGrade, int ExecGrade);
		AForm(AForm const & source);
		virtual ~AForm(void);
		AForm & operator=(AForm const & source);

		std::string const &	getName(void) const;
		int	const &			getSignGrade(void) const;
		int	const &			getExecGrade(void) const;
		bool const &		getSigned(void) const;

		void				beSigned(Bureaucrat const & employee);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		void				checkAutority(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception {
			public:
					virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
					virtual const char * what() const throw();
		};
		class	NotSignedException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
		const std::string	_name;
		const int			_signGrade;
		const int			_execGrade;
		bool				_signed; 
		friend std::ostream & operator<<(std::ostream & out, AForm & in);
};


#endif