/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 23:21:22 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/13 12:34:58 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Fixed{
    private:
        int fixed_point_value;
        static const int fractional_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
    
};