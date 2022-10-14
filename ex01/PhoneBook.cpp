/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:48:55 by euyi              #+#    #+#             */
/*   Updated: 2022/10/03 20:21:40 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->count = 0;
}

void	PhoneBook::add_contact()
{
	this->contact[this->count] = new Contact;
	if ( !this->contact[this->count]->add_my_contact() )
	{
		std::cout << "Contact not Saved!" << std::endl;
		delete this->contact[this->count];
		return ;
	}
	if ( this->count == MAX_ENTRY && this->count-- )
		PhoneBook::remove_oldest_contact(this->contact); //
	std::cout << "New Contact Saved!" << std::endl;
	this->count += 1;
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
	while ( ++i <= this->count )
		this->contact[i - 1]->print_summary(i);
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
	if ( i > 0 && i <= this->count )
		this->contact[i - 1]->print_contact();
	else
		std::cout << "The index requested is out of range" << std::endl;
}

void PhoneBook::free_mem()
{
	int	i;

	i = 0;
	while ( i < this->count )
	{
		delete this->contact[i];
		i++;
	}
}
