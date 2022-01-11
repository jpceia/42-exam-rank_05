/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:56:33 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/10 01:01:47 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
    Fwoosh();
    Fwoosh(const Fwoosh& rhs);

    virtual ~Fwoosh();

    Fwoosh& operator=(const Fwoosh& rhs);

    ASpell* clone() const;
};

#endif
