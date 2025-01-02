/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 12:39:34 by llarue            #+#    #+#             */
/*   Updated: 2024/12/29 22:00:29 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
# define PmergeMe_HPP

# include <iostream>
# include <vector>
# include <list>
# include <cstdlib>
# include <sstream>

// template <typename Container>
class PmergeMe {
	private:
		std::vector<int>	_vector;
		std::list<int>		_list;

	public:
		PmergeMe( void );
		PmergeMe( char** argv );
		PmergeMe( PmergeMe const & src );
		~PmergeMe( void );

		PmergeMe	&operator=( PmergeMe const & src );

		void		printContainerElement( void);
};

#endif