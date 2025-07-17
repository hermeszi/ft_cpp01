/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 21:03:38 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

HumanB::HumanB(std::string name) : name(name)
{
    weapon = NULL;
}
HumanB::~HumanB()
{
    
}
void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
void    HumanB::attack()
{
    if (this->weapon)
        cout << this->name << " attacks with their " << this->weapon->getType() << endl;
    else
        cout << this->name << " has no weapon to attack!" <<endl;
}
