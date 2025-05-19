/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:41:08 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 09:57:55 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

# include "AForm.abstract.hpp"
# include <iostream>
# include <string>
# include <exception>
# include "Colors.hpp"

class ShrubberyCreationForm : public AForm {
	public:
						ShrubberyCreationForm();
						ShrubberyCreationForm(std::string const & target);
						ShrubberyCreationForm(ShrubberyCreationForm const & source);
						~ShrubberyCreationForm(void);

			void		execute(Bureaucrat const & executor) const;

			ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & source);

	private:
			std::string	_target;
};


#endif