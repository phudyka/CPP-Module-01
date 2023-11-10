/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:04:43 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/10 15:49:29 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(const std::string& newName) : name(newName) {}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}

Zombie*	newZombie(std::string name)
{
	return (new Zombie(name));
}