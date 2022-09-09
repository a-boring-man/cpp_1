/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:40:59 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/09 12:53:04 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

void	randomChump( std::string name );

class Zombie {

	public:

		Zombie();
		~Zombie();

		void	set_name(std::string name);
		void	announce( void ) const;

	private:

		std::string	_name;

};

Zombie	*zombieHorde( int N, std::string name );