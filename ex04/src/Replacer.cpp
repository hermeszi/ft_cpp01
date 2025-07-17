
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 17:31:24 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Replacer.hpp"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;
using std::getline;

Replacer::Replacer(string filename, string s1, string s2) : 
filename(filename), s1(s1), s2(s2)
{
}

Replacer::~Replacer()
{
}

bool Replacer::loadFile()
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		cerr << "Error : Can't open " << filename << endl;
		return (false);
	}
	content.clear();
	std::string line;
	while (std::getline(file, line))
		content += line + "\n";
	//cout << content;
	file.close();
	return (true);
}
void Replacer::replaceAll()
{
	if (s1.empty())
    	return;
	size_t prev = 0;
	size_t pos	= 0;
	while((pos = content.find(s1, pos)) != std::string::npos)
	{
		result += content.substr(prev, pos - prev);
		result += s2;
		prev = pos + s1.length();
		pos = prev;
	}
	result += content.substr(prev);
	//cout << result;
}
bool Replacer::save()
{
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
	{
		cerr << "Error writing to file\n";
		return (false);
	}
	outfile << result;
	outfile.close();
	return (true);
}
