/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:48:20 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/23 09:48:20 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replacer
{
	private:
		std::string content;
	public:
		Replacer(std::string set_buffer);
		~Replacer();
		void		f_replace(std::string s1, std::string s2);
		std::string	get_content( void );
};

# endif