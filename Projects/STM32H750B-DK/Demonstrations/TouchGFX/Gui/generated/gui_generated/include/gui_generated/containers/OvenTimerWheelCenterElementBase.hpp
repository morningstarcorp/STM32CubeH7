/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef OVENTIMERWHEELCENTERELEMENT_BASE_HPP
#define OVENTIMERWHEELCENTERELEMENT_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>

class OvenTimerWheelCenterElementBase : public touchgfx::Container
{
public:
    OvenTimerWheelCenterElementBase();
    virtual ~OvenTimerWheelCenterElementBase() {}

    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

private:

};

#endif // OVENTIMERWHEELCENTERELEMENT_BASE_HPP