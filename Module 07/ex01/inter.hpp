#ifndef INTER_HPP
# define INTER_HPP

# include <iostream>

template <typename T>
void	fct_print(T arg) {
	std::cout << arg << std::endl;
	return ;
}

template <typename T_tab>
void	inter(T_tab *tab, int size, void (*fct)(T_tab &)) {
	int	i = 0;

	while (i < size)
	{
		fct(tab[i]);
		i++;
	}
	return ;
}

#endif