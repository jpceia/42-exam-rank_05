/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:57:52 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/10 01:03:03 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class Dummy : public ATarget
{
public:
    Dummy();
    Dummy(const Dummy& rhs);

    virtual ~Dummy();

    Dummy& operator=(const Dummy& rhs);

    ATarget* clone() const;
};

#endif
