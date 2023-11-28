/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:39:00 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/28 16:43:03 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		~Weapon();

		std::string const	&getType(void) const;
		void				setType(std::string nType);
};

#endif