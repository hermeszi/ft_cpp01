/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 21:03:47 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

using std::string;
using std::endl;
using std::cout;
using std::cin;

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    
}
HumanA::~HumanA()
{
    
}
void    HumanA::attack()
{
    cout << this->name << " attacks with their " << this->weapon.getType()<<endl;
}
