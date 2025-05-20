#include "../include/Serializer.class.hpp"

uintptr_t Serializer::serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw)) ;
}

Serializer::Serializer(void) {
	std::cout << BLACK_ON_GREEN "Serializer default constructor called." RESET << std::endl;
	 return ;
}

Serializer::Serializer(Serializer const & source) {
	std::cout << BLACK_ON_CYAN "Serializer copy constructor called." RESET << std::endl;
	*this = source;
	return ;
}

Serializer::~Serializer(void) {
	std::cout << BLACK_ON_RED "Serializer default destructor called." RESET << std::endl;
	return ;
}

Serializer & Serializer::operator=(Serializer const & source) {
	(void)source;
	std::cout << BLACK_ON_WHITE "Serializer assignment operator called." RESET << std::endl;
	return *this;
}


std::ostream & operator<<(std::ostream & out, Serializer & in) {
	(void)in;
	out << "Serializer instance" << std::endl;
	return out;
}
