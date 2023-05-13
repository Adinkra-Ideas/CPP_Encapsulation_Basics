# include "Contact.hpp"

Contact::Contact( void )	:	_name( std::string() ), 
								_lastname( std::string() ),
								_nickname( std::string() ),
								_number( std::string() ),
								_secret( std::string() ) {
}

Contact::~Contact( void ) {}

Contact::Contact( const Contact& other )	:	_name( other._name ), 
												_lastname( other._lastname ),
												_nickname( other._nickname ),
												_number( other._number ),
												_secret( other._secret ) {
}

Contact&	Contact::operator=( const Contact& other ) {
	if ( this != &other ) {
		_name = other._name; 
		_lastname = other._lastname;
		_nickname = other._nickname;
		_number = other._number;
		_secret = other._secret;
	}
	return *this;
}

	// ****************	CONSTRUCTORS && OPERATORS ENDS	**********************
	//////////////////////////////////////////////////////////////////////////
	// ******************* 	REGULAR METHODS BEGINS		**********************

int	Contact::add_my_contact()
{
	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, _name);
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, _lastname);
	std::cout << "Enter nick name" << std::endl;
	std::getline(std::cin, _nickname);
	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, _number);
	std::cout << "Enter darkest secret" << std::endl;
	std::getline(std::cin, _secret);
	if ( !entry_validator() )
		return (0);
	return (1);
}

int	Contact::entry_validator()
{
	if ( !_name.length() || !_lastname.length()
		|| !_nickname.length() || !_number.length()
		|| !_secret.length() )
		return (0);
	return (1);
}

void	Contact::print_summary(int i)
{
	std::cout << "         " << i << "|";
	print_10_chars(_name);
	print_10_chars(_lastname);
	print_10_chars(_nickname);
	std::cout << std::endl;
}

void	Contact::print_10_chars(std::string &data)
{
	int		i;
	char 	buff[20];

	i = 0;
	if ( data.length() == 10 )
		std::cout << data;
	else if ( data.length() < 10 )
	{
		while ( (i + data.length()) < 10 && ++i )
			std::cout << " ";
		std::cout << data;
	}
	else if ( data.length() > 10 )
	{
		data.copy(buff, 9, 0);
		buff[9] = '.';
		buff[10] = '\0';
		std::cout << buff;
	}
	std::cout << "|";
}

void	Contact::print_contact()
{
	std::cout << "First Name:       " << _name << std::endl
			<< "Last Name:        " << _lastname << std::endl
			<< "Nickname:         " << _nickname << std::endl
			<< "Phone Number:     " << _number << std::endl
			<< "Darkest Secret:   " << _secret << std::endl;
}
