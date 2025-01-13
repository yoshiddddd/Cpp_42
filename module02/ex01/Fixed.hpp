/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 23:21:22 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/13 13:35:55 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
    private:
        int fixed_point_value;
        static const int fractional_bits = 8;

    public:
        Fixed();
        Fixed(int);
        Fixed(float);
        Fixed(const Fixed &fixed); //コピーコンストラクタ
        Fixed &operator=(const Fixed &fixed);
        ~Fixed();
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        
    
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif