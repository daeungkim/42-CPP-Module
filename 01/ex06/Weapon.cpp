/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:38:24 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/15 16:55:28 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():
	type("")
{
}

Weapon::Weapon(std::string type):
	type(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType(void) const
{
	return (this->type);
}