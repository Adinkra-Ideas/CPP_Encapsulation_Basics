/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:18:26 by euyi              #+#    #+#             */
/*   Updated: 2022/10/03 20:32:03 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact()
{
	
}

int	Contact::add_my_contact()
{
	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, this->name);
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, this->lastname);
	std::cout << "Enter nick name" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, this->number);
	std::cout << "Enter darkest secret" << std::endl;
	std::getline(std::cin, this->secret);
	if ( !this->entry_validator() )
		return (0);
	return (1);
}

int	Contact::entry_validator()
{
	if ( !this->name.length() || !this->lastname.length()
		|| !this->nickname.length() || !this->number.length()
		|| !this->secret.length() )
		return (0);
	return (1);
}

void	Contact::print_summary(int i)
{
	std::cout << "         " << i << "|";
	this->print_10_chars(this->name);
	this->print_10_chars(this->lastname);
	this->print_10_chars(this->nickname);
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
	std::cout << "First Name:       " << this->name << std::endl
			<< "Last Name:        " << this->lastname << std::endl
			<< "Nickname:         " << this->nickname << std::endl
			<< "Phone Number:     " << this->number << std::endl
			<< "Darkest Secret:   " << this->secret << std::endl;
}
