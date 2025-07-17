/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 16:59:37 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

using std::string;
using std::endl;
using std::cout;
using std::cin;

Zombie::Zombie(std::string name) : name(name)
{
	
}

Zombie::~Zombie()
{
	const char* messages[] = {"Bizarre nutty gar same gar stick",
							"Zagatabodge",
							"A zig zagg gwag gwad ziggy got gon ziggity got goat zag ziggy got zong",
							"Gar gargiza",
							"Gruzic",
							"Zabba dabba zinga",
							"Hugruza",
							"Gruman",
							"Briska",
							"Grysic gop",
							"Ru'ig zon grizad aza ag?",
							"Ag greh zappgrah zu ru!"
							};
	size_t random_index = rand() % (sizeof(messages) / sizeof (messages[0]));
	std::cout << this->name << ": " << messages[random_index] << endl;
}
void    Zombie::announce (void) const
{
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}