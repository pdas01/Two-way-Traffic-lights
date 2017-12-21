#ifndef TRAFFICLIGHTCONTROLLER_H
#define TRAFFICLIGHTCONTROLLER_H

#include <QObject>
#include <QColor>
#include <QQuickItem>
#include <QTimer>

class TrafficLightController : public QObject
{
    Q_OBJECT
public:
    explicit TrafficLightController(QObject * = nullptr){
        red_color1=nullptr;
        green_color1=nullptr;
        orange_color1=nullptr;
        orange_color2=nullptr;
        red_color2=nullptr;
        green_color2=nullptr;
        timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(timerslot()));


    }

public slots:
    void onClickedStop();
    void onClickedGo();
    void onClickedYeild();
    void bulbColorChanged(QQuickItem* color1,QQuickItem* color2,QQuickItem* color3,QQuickItem* color4,QQuickItem* color5,QQuickItem* color6);
    void bulbColorChanged2(QQuickItem* color1,QQuickItem* color2,QQuickItem* color3,QQuickItem* color4,QQuickItem* color5,QQuickItem* color6);
    void bulbColorChanged3(QQuickItem* color1,QQuickItem* color2,QQuickItem* color3,QQuickItem* color4,QQuickItem* color5,QQuickItem* color6);
    void timerslot();

private:
    QQuickItem*  red_color1;
    QQuickItem*  red_color2;

    QQuickItem* green_color1;
    QQuickItem* green_color2;

    QQuickItem  *orange_color1;
    QQuickItem* orange_color2;
    QTimer* timer;

};

#endif // TRAFFICLIGHTCONTROLLER_H
