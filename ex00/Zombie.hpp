/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:49:47 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/09 09:43:07 by jrinna           ###   ########lyon.fr   */
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

Zombie	*newZombie( std::string name);