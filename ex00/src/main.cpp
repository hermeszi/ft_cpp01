/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 17:14:15 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <cstdio>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::getline;

#include "../inc/Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *ptr = new Zombie(name);
	return ptr;
}

void randomChump( std::string name )
{
	Zombie temp = Zombie(name);
	temp.announce();
}

int	main(int argc, char *argv[])
{
	(void) argv;
	if (argc != 1)
		return (1);
	srand(time(NULL));
	cout << "  🧟 🧟 🧟" << endl;
	//Start Zombie-ing
	Zombie *turtle1 = newZombie("Donatello");
	Zombie *turtle2 = newZombie("Michelangelo");
	turtle1->announce();
	turtle2->announce();
	randomChump("Leonardo");
	randomChump("Raphael");
	turtle2->announce();
	turtle1->announce();
	delete turtle2;
	delete turtle1;
	//End zombie-ing
	cout << " 👋 Bye! 👋" << endl;
	return (0);
}