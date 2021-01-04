/**
 * Define the state validity checker
*/
#ifndef VALIDITY_CHECKER_H
#define VALIDITY_CHECKER_H

#include <ompl/base/StateValidityChecker.h>
#include <ompl/control/SpaceInformation.h>
#include <ompl/base/spaces/SE2StateSpace.h>

namespace ob = ompl::base;

class ValidityChecker: public ob::StateValidityChecker
{
    public:
        ValidityChecker(const ob::SpaceInformationPtr &si);
    
        virtual bool isValid(const ob::State* state) const;

        double clearance(const ob::State* state) const;
};

#endif // VALIDITY_CHECKER_H