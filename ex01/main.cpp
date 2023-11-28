/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:04:35 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/28 15:22:22 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	Horde;
	
	Horde = zombieHorde(8, "Zombie Horde member");
	delete[] (Horde);
	return (0);
}