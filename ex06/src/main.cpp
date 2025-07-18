/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 21:04:25 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/harlFilter.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int	main(int argc, char *argv[])
{
	(void) argv;
	if (argc != 2)
    {
        cout << "./harl <level>" << endl;
		return (1);
    }
	//Start
    Harl hart;
    hart.filter(argv[1]);
	//End
	return (0);
}