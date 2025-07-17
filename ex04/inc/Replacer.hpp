/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 20:58:29 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>

using std::string;

class Replacer
{
private:
	std::string filename;
    std::string s1, s2;
    std::string content;
    std::string result;
public:
	Replacer(string filename, string s1, string s2);
	~Replacer();
    bool loadFile();
    void replaceAll();
    bool save();
};


#endif