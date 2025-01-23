/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:49:39 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/22 18:49:39 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include "Replacer.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}

	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: Cannot open file " << filename << std::endl;
		return (1);
	}

	// Ler todo o conteudo do ficheiro
	std::string content;
	std::string line;
	while (std::getline(infile, line))
	{
		content += line + '\n';
	}
	infile.close();

	Replacer	content_replacer(content);

	content_replacer.f_replace(s1, s2);

	// Realizar a substituição de s1 por s2
	// pos = content.find(s1, pos)) atualiza o pos com o s1 encontrado
	// std::string::npos significa não encontrado

	// size_t pos = 0;
	// while ((pos = content.find(s1, pos)) != std::string::npos)
	// {
	// 	// Remove a substring a partir do indice pos
	// 	content.erase(pos, s1.length());
	// 	// Insere a substring no espaço antes ocupado
	// 	content.insert(pos, s2);
	// 	pos += s2.length();
	// }

	// Criar o ficheiro de saída
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: Cannot creat output file " << filename << ".replace" << std::endl;
		return (1);
	}

	outfile << content_replacer.get_content();
	outfile << content;
	outfile.close();

	std::cout << "File " << filename << ".replace created successfully!" << std::endl;

	return (0);
}