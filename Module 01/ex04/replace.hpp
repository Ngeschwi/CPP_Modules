#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

struct	data
{
	std::string		s1;
	std::string		s2;
	std::ifstream	ifs;
	std::ofstream	ofs;
};

#endif