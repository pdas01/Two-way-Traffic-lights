#include "TrafficLightController.h"
#include <QState>
#include <QStateMachine>
#include <iostream>
#include <QTimer>
using namespace std;

void TrafficLightController::bulbColorChanged(QQuickItem* color1,QQuickItem* color2,QQuickItem* color3,QQuickItem* color4,QQuickItem* color5,QQuickItem* color6)
{
    red_color1=color1;
    green_color2=color2;
    red_color2=color3;
    green_color1=color4;
    orange_color1=color5;
    orange_color2=color6;
}

void TrafficLightController::onClickedStop()
{
    timer->stop();
    red_color1->setProperty("color","green");
    green_color2->setProperty("color","red");
    red_color2->setProperty("color","black");
    green_color1->setProperty("color","black");
    orange_color1->setProperty("color","black");
    orange_color2->setProperty("color","black");
}

void TrafficLightController::bulbColorChanged2(QQuickItem* color1,QQuickItem* color2,QQuickItem* color3,QQuickItem* color4,QQuickItem* color5,QQuickItem* color6)
{
    orange_color1=color1;
    orange_color2=color2;
    red_color1=color3;
    red_color2=color4;
    green_color1=color5;
    green_color2=color6;
}
void TrafficLightController::onClickedYeild()
{
    timer->start(500);
    orange_color1->setProperty("color","orange");
    orange_color2->setProperty("color","orange");


    red_color1->setProperty("color","black");
    red_color2->setProperty("color","black");
    green_color1->setProperty("color","black");
    green_color2->setProperty("color","black");


}
void TrafficLightController::bulbColorChanged3(QQuickItem* color1,QQuickItem* color2,QQuickItem* color3,QQuickItem* color4,QQuickItem* color5,QQuickItem* color6)
{
    green_color1=color1;
    red_color2=color2;

    green_color2=color3;
    red_color1=color4;
    orange_color1=color5;
    orange_color2=color6;
}
void TrafficLightController::onClickedGo()
{
    timer->stop();
    green_color1->setProperty("color","green");
    red_color2->setProperty("color","red");

    red_color1->setProperty("color","black");
    green_color2->setProperty("color","black");
    orange_color1->setProperty("color","black");
    orange_color2->setProperty("color","black");


}
void TrafficLightController::timerslot()
{
    if ( orange_color1->property("color") == "orange")
       orange_color1->setProperty("color","black");
    else
        orange_color1->setProperty("color","orange");


    if( orange_color2->property("color")== "orange")
        orange_color2->setProperty("color","black");
    else
        orange_color2->setProperty("color","orange");

    timer->start(500);

}

