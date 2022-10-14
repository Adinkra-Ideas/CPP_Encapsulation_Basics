/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:27:26 by euyi              #+#    #+#             */
/*   Updated: 2022/10/03 20:16:30 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
private:
	std::string	name;
	std::string	lastname;
	std::string	nickname;
	std::string number;
	std::string secret;

public:
	Contact();
	int		add_my_contact();
	int		entry_validator();
	void	print_summary(int i);
	void	print_10_chars(std::string &data);
	void	print_contact();
};

#endif
