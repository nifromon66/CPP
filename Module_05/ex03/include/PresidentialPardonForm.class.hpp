/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:29:58 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 10:30:18 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP


# include "AForm.abstract.hpp"
# include <iostream>
# include <string>
# include <exception>
# include "Colors.hpp"

class PresidentialPardonForm : public AForm {
	public:
						PresidentialPardonForm();
						PresidentialPardonForm(std::string const & target);
						PresidentialPardonForm(PresidentialPardonForm const & source);
						~PresidentialPardonForm(void);

			void		execute(Bureaucrat const & executor) const;

			PresidentialPardonForm &	operator=(PresidentialPardonForm const & source);

	private:
			std::string	_target;
};


#endif