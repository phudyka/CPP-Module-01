/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:37:20 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/28 16:46:04 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void	HumanB::attack(void) const
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with his "
				<< (*(this->_weapon)).getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << " tries to attack but has no weapon "
					<< std::endl;
	}
	
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
}