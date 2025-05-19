/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 06:29:06 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 08:27:46 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include "Bureaucrat.class.hpp"
# include <iostream>
# include <string>
# include <exception>
# include "Colors.hpp"

class Bureaucrat;

class Form {
	public:
		Form(void);
		Form(std::string const & name, int SignGrade, int ExecGrade);
		Form(Form const & source);
		~Form(void);
		Form & operator=(Form const & source);

		std::string const &	getName(void) const;
		int	const &			getSignGrade(void) const;
		int	const &			getExecGrade(void) const;
		bool const &		getSigned(void) const;

		void				beSigned(Bureaucrat const & employee);
	private:
		const std::string	_name;
		const int			_signGrade;
		const int			_execGrade;
		bool				_signed;
		class _GradeTooHighException : public std::exception {
			public:
					virtual const char * what() const throw();
		};
		class _GradeTooLowException : public std::exception {
			public:
					virtual const char * what() const throw();
		};
		friend std::ostream & operator<<(std::ostream & out, Form & in);
};


#endif