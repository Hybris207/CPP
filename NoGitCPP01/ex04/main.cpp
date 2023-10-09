/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carv <gde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:47:06 by gde-carv          #+#    #+#             */
/*   Updated: 2023/09/29 23:26:10 by gde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace_in_file(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::ifstream input(filename.c_str());
	if (!input.is_open())
	{
		std::cerr << "Error opening file: " << filename << std::endl;
		return;
	}

	std::string newFilename = filename + ".replace";
	std::ofstream output(newFilename.c_str());

	if (!output.is_open())
	{
		std::cerr << "Error creating output file: " << newFilename << std::endl;
		input.close();
		return;
	}

	std::string line;
	while (std::getline(input, line))
	{
		std::string::size_type pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		output << line << std::endl;
	}

	input.close();
	output.close();
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	replace_in_file(filename, s1, s2);

	return 0;
}
