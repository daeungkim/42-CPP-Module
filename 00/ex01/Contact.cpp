/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:02:01 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/15 18:52:35 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::fields_name[11] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Login",
	"Address",
	"E-mail",
	"Phone",
	"Birthday",
	"Favorite Meal",
	"Underwear Color",
	"Darkest Secret"
};

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::set_informations(int index)
{
	this->index = index;
	for (int i = FirstName; i < Secret; i++)
	{
		std::cout << "# " << Contact::fields_name[i] << ":\n+";
		std::getline(std::cin, this->informations[i]);
	}
	std::cout << "# Contact added !" << std::endl;
}

void Contact::display_header()
{
	int	i;

	std::cout << "|" << std::setw(10) << this->index;
	for (int i = FirstName; i <= Nickname; i++)
	{
		std::cout << "|";
		if (this->informations[i].length() > 10)
			std::cout << this->informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->informations[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::display(void)
{
	std::cout << "# Contact [" << this->index << "]" << std::endl;
	for (int i = FirstName; i < Secret; i++)
	{
		std::cout << Contact::fields_name[i] << ": ";
		std::cout << this->informations[i] << std::endl;
	}
}