/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:06:03 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/28 15:38:40 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;
	std::cout << "via string address: " << &str << std::endl;
	std::cout << "via stringPTR: " << stringPTR << std::endl;
	std::cout << "via stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "via string itself: " << str << std::endl;
	std::cout << "via stringPTR: " << *stringPTR << std::endl;
	std::cout << "via stringREF: " << stringREF << std::endl;
	
	std::cout << std::endl;
	return (0);
} 