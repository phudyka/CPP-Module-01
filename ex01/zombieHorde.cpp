/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:30:44 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/28 15:36:51 by phudyka          ###   ########.fr       */
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
		ss << i + 1;
        horde[i].setName(name + " " + ss.str());
		horde[i].announce();
		
	}
	return (&horde[0]);
}