/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:48:26 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/22 18:48:26 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(std::string set_buffer) : content(set_buffer) {}

Replacer::~Replacer()
{
}

void	Replacer::f_replace(std::string s1, std::string s2)
{
	// Realizar a substituição de s1 por s2
	// pos = content.find(s1, pos)) atualiza o pos com o s1 encontrado
	// std::string::npos significa não encontrado
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		// Remove a substring a partir do indice pos
		content.erase(pos, s1.length());
		// Insere a substring no espaço antes ocupado
		content.insert(pos, s2);
		pos += s2.length();
	}
}

std::string	Replacer::get_content( void )
{
	return (content);
}