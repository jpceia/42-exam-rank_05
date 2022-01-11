/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:56:33 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/10 01:01:47 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
    Polymorph();
    Polymorph(const Polymorph& rhs);

    virtual ~Polymorph();

    Polymorph& operator=(const Polymorph& rhs);

    ASpell* clone() const;
};

#endif
