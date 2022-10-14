/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:20:09 by euyi              #+#    #+#             */
/*   Updated: 2022/10/03 20:20:36 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "Contact.hpp"

# ifndef MAX_ENTRY
#  define MAX_ENTRY 8
# endif

class PhoneBook
{
private:
	int		count;
	Contact	*contact[9];

public:
	PhoneBook();
	void	add_contact();
	void	out_contact();
	int		entry_validator(Contact *contact);
	void	remove_oldest_contact(Contact **contact);
	void	display_summary();	
	void	print_10_chars(std::string &data);
	void	print_contact(Contact *contact);
	void	free_mem();
};

#endif
