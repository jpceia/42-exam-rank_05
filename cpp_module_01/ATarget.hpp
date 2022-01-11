/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:51:30 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 00:12:19 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
protected:
    std::string type;

public:
    ATarget();
    ATarget(const std::string& type);
    ATarget(const ATarget& rhs);

    virtual ~ATarget();

    virtual ATarget& operator=(const ATarget& rhs);

    virtual ATarget* clone() const = 0;

    void getHitBySpell(const ASpell& spell) const;

    std::string getType() const;
};

#endif
