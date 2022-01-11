/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:47:39 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 00:09:45 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
    std::string name;
    std::string effects;

public:
    ASpell();
    ASpell(const std::string& name, const std::string& effects);
    ASpell(const ASpell& rhs);

    virtual ~ASpell();

    virtual ASpell& operator=(const ASpell& rhs);

    virtual ASpell* clone() const = 0;

    std::string getName() const;
    std::string getEffects() const;

    void launch(const ATarget& target) const;
};

#endif
