/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:04:43 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/28 15:21:38 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string& newName) : name(newName)
{
	announce();
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}

void	Zombie::setName(std::string newName)
{
	this->name = newName;
}