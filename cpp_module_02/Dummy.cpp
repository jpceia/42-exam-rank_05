/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 01:02:08 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/10 23:53:15 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy()
    : ATarget("Target Practice Dummy")
{
}

Dummy::Dummy(const Dummy& rhs)
{
    *this = rhs;
}

Dummy::~Dummy()
{
}

Dummy& Dummy::operator=(const Dummy& rhs)
{
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

ATarget* Dummy::clone() const
{
    return (new Dummy(*this));
}
