/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 01:02:08 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 14:37:45 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall()
    : ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::BrickWall(const BrickWall& rhs)
{
    *this = rhs;
}

BrickWall::~BrickWall()
{
}

BrickWall& BrickWall::operator=(const BrickWall& rhs)
{
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

ATarget* BrickWall::clone() const
{
    return (new BrickWall(*this));
}
