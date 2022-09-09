/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:33:55 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/09 13:52:23 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {

	std::cout << std::endl << "debut des tests :" << std::endl << std::endl;

	std::string	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "the memory adress of the string :       " << &str << std::endl;
	std::cout << "the memory adress held by stringPTR :   " << stringPTR << std::endl;
	std::cout << "the memory adress held by stringREF :   " << &stringREF << std::endl << std::endl;

	std::cout << "the value of the string :               " << str << std::endl;
	std::cout << "the value pointed to by stringPTR :     " << *stringPTR << std::endl;
	std::cout << "the value pointed to by stringREF :     " << stringREF << std::endl << std::endl;
}