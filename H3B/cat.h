#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public Animal
{
public:
    Cat();
    virtual void callOut() override;
    ~Cat();
};

#endif // CAT_H
