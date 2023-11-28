/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:37:02 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/28 15:39:47 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his "
				<< this->_weapon.getType() << std::endl;
}