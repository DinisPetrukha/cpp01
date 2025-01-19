/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:41:52 by dpetrukh          #+#    #+#             */
/*   Updated: 2025/01/19 16:49:09 by dpetrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	// 1. Inicializar a variável string
	std::string str = "HI THIS IS BRAIN";

	// 2. Criar um ponteiro para a string
	std::string* stringPTR = &str;

	// 3. Criar uma referência para a string
	std::string& stringREF = str;

	// 4. Imprimir os endereços de memória
	std::cout << "Memory address of the string variable: " << &str << std::endl;
	std::cout << "Memory address held by stringPTR:      " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF:      " << &stringREF << std::endl;

	// 5. Imprimir os valores
	std::cout << "Value of the string variable:          " << str << std::endl;
	std::cout << "Value pointed to by stringPTR:         " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:         " << stringREF << std::endl;

	return 0;
}
