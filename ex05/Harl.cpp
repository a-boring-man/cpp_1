/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:39:39 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/14 12:31:18 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;
using std::string;

// BASIC STUFF :

Harl::Harl( void ) {

	cout << "Harl has been created and is probably seeking the manager" << endl;
	return;
}

Harl::~Harl( void ) {

	cout << "Harl has been killed thank goodness..." << endl;
	return;
}

// PUBLIC FUNCTION :

void	Harl::complain( string level ) const {

	HarlMemFn	fct[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	string		level_table[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int			i = 0;

	while (level.compare(level_table[i]))
		i++;
	if (i < 4)
		(this->*fct[i])();
	else
		cout << "Harl h"
	return;
}

// PRIVATE FUNCTION :

void	Harl::debug( void ) const{

	cout << "A DEBUG MESSAGE : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
	return;
}

void	Harl::info( void ) const{

	cout << "A INFO MESSAGE : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
	return;
}

void	Harl::warning( void ) const{

	cout << "A WARNING MESSAGE : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
	return;
}

void	Harl::error( void ) const{

	cout << "A ERROR MESSAGE : This is unacceptable! I want to speak to the manager now." << endl;
	return;
}
