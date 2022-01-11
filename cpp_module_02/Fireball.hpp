/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:56:33 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/10 01:01:47 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class Fireball : public ASpell
{
public:
    Fireball();
    Fireball(const Fireball& rhs);

    virtual ~Fireball();

    Fireball& operator=(const Fireball& rhs);

    ASpell* clone() const;
};

#endif
