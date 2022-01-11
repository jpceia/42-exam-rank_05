/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 01:01:51 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 00:21:15 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph()
    : ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::Polymorph(const Polymorph& rhs)
{
    *this = rhs;
}

Polymorph::~Polymorph()
{

}

Polymorph& Polymorph::operator=(const Polymorph& rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->effects = rhs.effects;
    }
    return (*this);
}

ASpell* Polymorph::clone() const
{
    return (new Polymorph(*this));
}
