/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:16:46 by yoshidakazu       #+#    #+#             */
/*   Updated: 2025/01/13 15:28:34 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed{
    private:
        int fixed_point_value;
        static const int fractional_bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(int);
        Fixed(float);
        Fixed(const Fixed &fixed); //コピーコンストラクタ
        Fixed &operator=(const Fixed &fixed);
        
};
