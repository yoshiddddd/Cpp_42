/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:16:11 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/19 16:19:43 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed c = 4;
Fixed d = 2;
std::cout << "c is " << c/3 << std::endl;
std::cout << "a is "<< a << std::endl;
std::cout <<"++a is " <<  ++a << std::endl;
std::cout << "a is " << a << std::endl;
std::cout << "a++ is "<< a++ << std::endl;
std::cout << "a is "<< a << std::endl;
std::cout << "b is "<< b << std::endl;
std::cout << "max is "<< Fixed::max( a, b ) << std::endl;
std::cout << "min is "<< Fixed::min( a, b ) << std::endl;
return 0;
}

// int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
// return 0;
// }