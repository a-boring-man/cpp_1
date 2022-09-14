/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:39:36 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/14 11:40:46 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl {

	public :

		Harl();
		~Harl();

		void	complain( std::string level)	const;

	private :

		void	debug( void )	const;
		void	info( void )	const;
		void	warning( void )	const;
		void	error( void )	const;

};

typedef	void	(Harl::*HarlMemFn) ( void )	const;