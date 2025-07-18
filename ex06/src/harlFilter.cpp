
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 17:31:24 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/harlFilter.hpp"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;
using std::getline;


void Harl::debug( void )
{
	cout	<< "[DEBUG]\n" 
			<< "I love having extra bacon for my 7XL-double-" 
			<< "cheese-triple-pickle-special ketchup burger.\n"
			<< "I really do!" << endl;
}

void Harl::info( void )
{
	cout 	<< "[INFO]\n"
			<< "I cannot believe adding extra bacon costs more money.\n" 
			<<"You didn’t put enough bacon in my burger!\nIf you did, " 
			<< "I wouldn’t be asking for more!" << endl;
}

void Harl::warning( void )
{
	cout 	<< "[WARNING]\n"
			<< "I think I deserve to have some extra bacon for free.\n" 
			<<"I’ve been coming for years, whereas you started working here just last month." << endl;
}

void Harl::error( void )
{
	cout 	<< "[ERROR]\n"
			<< "This is unacceptable! I want to speak to the manager now." << endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain( std::string level )
{
	std::string levels[4] 		= {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcPtr[4])() 	= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*funcPtr[i])();
		}
	}
}

void Harl::filter(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			index = i;
			break;
		}
	}

	switch (index)
	{
		case 0:
		{
			complain("DEBUG");
			complain("INFO");
			complain("WARNING");
			complain("ERROR");
			break;
		}
		case 1:
		{
			complain("INFO");
			complain("WARNING");
			complain("ERROR");
			break;
		}
		case 2:
		{
			complain("WARNING");
			complain("ERROR");
			break;
		}
		case 3:
		{
			complain("ERROR");
			break;
		}
		default:
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}


}

// void Harl::filter(std::string level)
// {
// 	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
// 	int index = -1;

// 	for (int i = 0; i < 4; i++)
// 	{
// 		if (level == levels[i])
// 		{
// 			index = i;
// 			break;
// 		}
// 	}

// 	if (index == -1)
// 	{
// 		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
// 		return;
// 	}

// 	do {
// 		this->complain(levels[index]);
// 		index++;
// 	} while (index < 4);
// }
