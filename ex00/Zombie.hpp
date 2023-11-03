/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:04:46 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/03 11:22:53 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie
{
private:
	std::string	name;
public:

	Zombie();
	Zombie(const std::string& name);
	~Zombie();

	void	announce(void) const;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif