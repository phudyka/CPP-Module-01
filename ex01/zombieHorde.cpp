/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:30:44 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/10 14:07:51 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::stringstream	ss;
		ss << name << i;
		std::string	zName = ss.str();

		Zombie* heapZ = newZombie(zName);
		heapZ->announce();
		delete (heapZ);
	}
	return (horde);
}