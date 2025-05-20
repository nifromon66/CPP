/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:06:12 by nifromon          #+#    #+#             */
/*   Updated: 2025/05/20 07:35:54 by nifromon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.class.hpp"
#include "../include/B.class.hpp"
#include "../include/A.class.hpp"
#include "../include/C.class.hpp"

typedef	Base	*(*createBase)(void);

static Base	*createA(void) {
	return (new A());
}

static Base	*createB(void) {
	return (new B());
}

static Base	*createC(void) {
	return (new C());
}

static Base	*generate(void) {
	int	i;
	createBase	array[3] = { createA, createB, createC };
	i = rand() % 3;
	return (array[i]()); 
}

static void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Object is of type A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object is of type B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object is of type C." << std::endl;
	else
		std::cout << "Object type is unknown." << std::endl;
}

static void	identify(Base & p)
{
	try {
		dynamic_cast<A&>(p);
		std::cout << "Object is of type A." << std::endl;
		return;
	} 
	catch (...) {}

	try {
		dynamic_cast<B&>(p);
		std::cout << "Object is of type B." << std::endl;
		return;
	} 
	catch (...) {}

	try {
		dynamic_cast<C&>(p);
		std::cout << "Object is of type C." << std::endl;
		return;
	} 
	catch (...) {}

	std::cout << "Object type is unknown." << std::endl;
}

int	main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));

	Base* ptr = generate();

	// test by pointer
	std::cout << "Test by pointer:" << std::endl;
	identify(ptr);

	// test by reference
	std::cout << "Test by reference:" << std::endl;
	identify(*ptr);

	delete ptr;
	return (0);
}