/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:25:34 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 10:36:38 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP


# include "AForm.abstract.hpp"
# include <iostream>
# include <string>
# include <exception>
# include <cstdlib>
# include <ctime>
# include "Colors.hpp"

class RobotomyRequestForm : public AForm {
	public:
						RobotomyRequestForm();
						RobotomyRequestForm(std::string const & target);
						RobotomyRequestForm(RobotomyRequestForm const & source);
						~RobotomyRequestForm(void);

			void		execute(Bureaucrat const & executor) const;

			RobotomyRequestForm &	operator=(RobotomyRequestForm const & source);

	private:
			std::string	_target;
};


#endif