/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:08:17 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/13 11:17:12 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main( int ac, char **av ) {

	if (ac != 4)
	{
		std::cout << "i'll only accept 3 imput :" << std::endl << "- the first should be a file name" << std::endl << "- the second and third need to be a string" << std::endl;
		return(1);
	}
	if (!av[1][0] || !av[2][0])
	{
		std::cout << "the first two argument can't be empty string, please try again" << std::endl;
		return(1);
	}
	std::string		outfile_name = av[1];
	std::string		remplace = av[2];
	std::string		tmp;
	std::fstream	infile;
	std::fstream	outfile;
	std::size_t		pos;
	
	infile.open(av[1], std::ios::in);
	outfile.open(outfile_name.append(".replace"), std::ios::out);

	while (!infile.eof())
	{
		getline(infile, tmp);
		pos = tmp.find(av[2]);
		if (pos != std::string::npos)
		{
			std::cout << "-" << tmp.substr(pos, remplace.size()) << "-" << std::endl;
		}
		outfile << tmp << std::endl;
	}

	infile.close();
	outfile.close();
}