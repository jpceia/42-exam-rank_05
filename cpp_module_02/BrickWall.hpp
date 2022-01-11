/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:57:52 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 14:36:53 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class BrickWall : public ATarget
{
public:
    BrickWall();
    BrickWall(const BrickWall& rhs);

    virtual ~BrickWall();

    BrickWall& operator=(const BrickWall& rhs);

    ATarget* clone() const;
};

#endif
