/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 17:58:29 by myuen            ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	(void) argv;
	if (argc != 1)
		return (1);
	cout << " 🖉 🖉 🖉" << endl;
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;

    cout << &var << endl;
    cout << stringPTR << endl;
    cout << &stringREF << endl;

    cout << var << endl;
    cout << *stringPTR << endl;
    cout << stringREF << endl;
    
	cout << " 👋 Bye! 👋" << endl;
	return (0);
}