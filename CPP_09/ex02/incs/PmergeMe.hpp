/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 12:39:34 by llarue            #+#    #+#             */
/*   Updated: 2025/03/26 15:19:42 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <deque>
# include <cstdlib>
# include <sstream>
# include <ctime>
# include <string>
# include <cmath>
# include <algorithm>
# include <iomanip>
# include <typeinfo>

template < typename Container >
class PmergeMe {
	
    Container container;

	public:
	
        typedef typename Container::value_type ValueType;
        typedef typename Container::iterator Iterator;
		typename Container::iterator begin();
        typename Container::iterator end();

        PmergeMe( void );
        PmergeMe( char **argv );
		
        void	sortTime( void );
        void	sort( void );

	private:
	
        time_t	start_;
        time_t	end_;
		
        float	time( void );
        int	Jacobsthal( int k );
        size_t	validStringCheck( std::string &str );    
        void	sort( Container &vec );
        std::string	containerType( void );
        void	insert( Container &main, Container &pend, ValueType odd, Container &left, Container &vec, bool is_odd, int order );

};

template < typename Container >
std::ostream& operator<<( std::ostream &os, const PmergeMe<Container> &obj );

# include "PmergeMe.tpp"

#endif