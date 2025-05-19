/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:31:43 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/19 11:28:21 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.class.hpp"
#include "../include/AForm.abstract.hpp"
#include "../include/ShrubberyCreationForm.class.hpp"
#include "../include/RobotomyRequestForm.class.hpp"
#include "../include/PresidentialPardonForm.class.hpp"
#include "../include/Intern.class.hpp"

int main(void)
{
	try {
		Intern someRandomIntern;

		// Creating known forms
		AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
		AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "Garden");
		AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Fry");

		// Create a bureaucrat with high enough grade
		Bureaucrat boss("Rick", 1);

		// Signing and executing the forms
		form1->beSigned(boss);
		form1->execute(boss);

		form2->beSigned(boss);
		form2->execute(boss);

		form3->beSigned(boss);
		form3->execute(boss);

		// Clean up
		delete form1;
		delete form2;
		delete form3;

		// Try creating an unknown form
		AForm* unknown = someRandomIntern.makeForm("unknown form", "Nowhere");

		// If we reach here, it's an error
		delete unknown;
	}
	catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}