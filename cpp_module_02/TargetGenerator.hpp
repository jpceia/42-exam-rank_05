/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:27:53 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/11 14:34:26 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <iostream>
# include <vector>

class TargetGenerator
{
private:
    std::vector<ATarget*> targets;

    TargetGenerator(const TargetGenerator& rhs);
    TargetGenerator& operator=(const TargetGenerator& rhs);

public:
    TargetGenerator();
    virtual ~TargetGenerator();

    void learnTargetType(ATarget* target);
    void forgetTargetType(const std::string& targetName);
    ATarget* createTarget(const std::string& targetName);
};

#endif
