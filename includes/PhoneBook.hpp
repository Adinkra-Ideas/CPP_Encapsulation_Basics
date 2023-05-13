#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "Contact.hpp"

#define MAX_ENTRY 8

class PhoneBook
{
public:
	PhoneBook( void );
	~PhoneBook( void );
	PhoneBook( const PhoneBook& other );

	PhoneBook& operator=( const PhoneBook& other );

	void	add_contact();
	void	out_contact();
	int		entry_validator(Contact *contact);
	void	remove_oldest_contact(Contact **contact);
	void	display_summary();	
	void	print_10_chars(std::string &data);
	void	print_contact(Contact *contact);
	void	free_mem();

private:
	int		_count;
	Contact	*_contact[9];
};

#endif
