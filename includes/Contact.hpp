#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
public:
	Contact( void );
	~Contact( void );
	Contact( const Contact& other );

	Contact&	operator=( const Contact& other );

	int		add_my_contact( void );
	int		entry_validator( void );
	void	print_summary( int i );
	void	print_10_chars( std::string &data );
	void	print_contact( void );

private:
	std::string	_name;
	std::string	_lastname;
	std::string	_nickname;
	std::string _number;
	std::string _secret;
};

#endif
