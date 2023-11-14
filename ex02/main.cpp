/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:06:03 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/14 09:03:39 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
 
	std::cout << "string = "<< &brain << std::endl;
	std::cout << "stringPTR = "<< stringPTR << std::endl;
	std::cout << "stringREF = "<< &stringREF << std::endl;
	std::cout << "string value = "<< brain << std::endl;
	std::cout << "stringPTR value = "<< *stringPTR << std::endl;
	std::cout << "stringREF value = "<< stringREF << std::endl;
	return (0);
} 