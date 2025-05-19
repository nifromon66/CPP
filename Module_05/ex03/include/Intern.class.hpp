/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:47:11 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 11:23:00 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP


# include <iostream>
# include <string>
# include <exception>
# include "Colors.hpp"
# include "AForm.abstract.hpp"
# include "ShrubberyCreationForm.class.hpp"
# include "RobotomyRequestForm.class.hpp"
# include "PresidentialPardonForm.class.hpp"
# include "Bureaucrat.class.hpp"

typedef AForm	*(*_PrintingMachine)(std::string const &);

class Intern {
	public:
			Intern(void);
			Intern(Intern const & source);
			~Intern(void);
			Intern & operator=(Intern const & source);

			AForm	*makeForm(std::string const & name, std::string const & target);
	private:
			static AForm	*_createRobotomy(std::string const & target);
			static AForm	*_createPresidential(std::string const & target);
			static AForm	*_createShrubbery(std::string const & target);
			friend std::ostream & operator<<(std::ostream & out, Intern & in);
};


#endif