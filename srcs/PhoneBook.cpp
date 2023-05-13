# include "PhoneBook.hpp"

PhoneBook::PhoneBook()	: _count( int() ) {
}

PhoneBook::~PhoneBook( void ) {
}

PhoneBook::PhoneBook( const PhoneBook& other )	:	_count(other._count) {
	int tmp = _count;
	while ( tmp ) {
		_contact[tmp - 1] = new Contact(*other._contact[tmp - 1]);
		--tmp;
	}
}

PhoneBook& PhoneBook::operator=( const PhoneBook& other ) {
	int tmp = other._count;

	if ( this != &other ) {
		_count = other._count;
		while ( tmp ) {
			_contact[tmp - 1] = new Contact(*other._contact[tmp - 1]);
			--tmp;
		}
	}

	return *this;
}

void	PhoneBook::add_contact()
{
	_contact[_count] = new Contact;
	if ( ! _contact[_count]->add_my_contact() )
	{
		std::cout << "Contact not Saved!" << std::endl;
		delete _contact[_count];
		_contact[_count] = NULL;
		return ;
	}
	if ( _count == MAX_ENTRY && _count-- )
		PhoneBook::remove_oldest_contact(_contact); //
	std::cout << "New Contact Saved!" << std::endl;
	_count += 1;
}

void PhoneBook::remove_oldest_contact(Contact **contact)
{
	int	i;
	
	i = 0;
	delete contact[0];
	while ( i < MAX_ENTRY )
	{
		contact[i] = contact[i + 1];
		i++;
	}
}

void	PhoneBook::display_summary()
{
	int			i;
	std::string input;

	i = 0;
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	while ( ++i <= _count )
		_contact[i - 1]->print_summary(i);
	std::cout << "Enter index number of a contact for full details" << std::endl;
	std::getline(std::cin, input);
	try
	{
    	i = std::stoi(input, nullptr);
	}
    catch ( ... )
	{
        std::cout << "The index requested is wrong!" << std::endl;
		return ;
    }
	if ( i > 0 && i <= _count )
		_contact[i - 1]->print_contact();
	else
		std::cout << "The index requested is out of range" << std::endl;
}

void PhoneBook::free_mem()
{
	int	i;

	i = 0;
	while ( i < _count )
	{
		delete _contact[i];
		i++;
	}
}
