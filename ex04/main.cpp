/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:08:17 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/14 10:30:01 by jrinna           ###   ########lyon.fr   */
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
	std::string		remplace_with = av[3];
	std::string		tmp;
	std::fstream	infile;
	std::fstream	outfile;
	std::size_t		pos;
	int				i = 0;
	bool			first_getline = true;
	
	infile.open(av[1], std::ios::in);
	if (!infile.is_open())
	{
		std::cout << "an error has occur opening the file, try again" << std::endl;
		return (0);
	}
	outfile.open(outfile_name.append(".replace"), std::ios::out | std::ios::trunc);

	while (!infile.eof())
	{
		getline(infile, tmp);
		pos = tmp.find(av[2]);
		if (!first_getline)
			outfile << std::endl;
		else
			first_getline = false;
		while (pos != std::string::npos)
		{
			i++;
			/*std::cout << "-" << */tmp.erase(pos, remplace.size())/* << "-" << std::endl*/;
			/*std::cout << "-" << */tmp.insert(pos, remplace_with)/* << "-" << std::endl*/;
			pos = tmp.find(av[2], pos + remplace.size() * i);
		}
		outfile << tmp;
	}

	infile.close();
	outfile.close();
}