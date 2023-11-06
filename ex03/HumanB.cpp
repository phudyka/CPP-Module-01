/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:37:20 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/06 15:38:10 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL)
{
	this->_name = name;
	std::cout << name << " is unarmed" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}