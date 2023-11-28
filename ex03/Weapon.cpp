/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:38:39 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/28 16:43:09 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

std::string const	&Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string nType)
{
	this->_type = nType;
}