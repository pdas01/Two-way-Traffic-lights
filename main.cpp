#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <TrafficLightController.h>
#include <QObject>
#include <QQuickWindow>
#include <QQuickItem>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    TrafficLightController trafficLightObject;

    QObject* object=engine.rootObjects().at(0);
    QQuickWindow* mainWindow = qobject_cast<QQuickWindow*>(object);
    if(mainWindow==nullptr){
        return 0;
        cout<<"window not found\n";
    }
    //Finding the 1st red light
    QQuickItem* redbulb1 = mainWindow->findChild<QQuickItem*>("redBulb1");
    QQuickItem* greenbulb2=mainWindow->findChild<QQuickItem*>("greenBulb2");
    QQuickItem* orangebulb1 = mainWindow->findChild<QQuickItem*>("orangeBulb1");
    QQuickItem* orangebulb2 = mainWindow->findChild<QQuickItem*>("orangeBulb2");
    QQuickItem* greenbulb1 = mainWindow->findChild<QQuickItem*>("greenBulb1");
    QQuickItem* redbulb2 = mainWindow->findChild<QQuickItem*>("redBulb2");
    if(redbulb1==nullptr){
        return 0;
        cout<<"red bulb 1 not found\n";
    }
    if(greenbulb2==nullptr){return 0;}
    if((greenbulb1==nullptr)){
        return 0;
    }
    if(redbulb2==nullptr){return 0;}
    if((orangebulb1==nullptr)){
        return 0;
    }
    if(orangebulb2==nullptr){return 0;}

    trafficLightObject.bulbColorChanged(redbulb1,greenbulb2,redbulb2,greenbulb1,orangebulb1,orangebulb2);
    QQuickItem* stopButton = mainWindow->findChild<QQuickItem*>("stopButton");
    if(stopButton==nullptr){
        return 0;
    }

    QObject::connect(stopButton,SIGNAL(clicked()),&trafficLightObject,SLOT(onClickedStop()));
    cout<<"prgm ended\n";



        trafficLightObject.bulbColorChanged2(orangebulb1,orangebulb2,redbulb1,redbulb2,greenbulb1,greenbulb2);
        QQuickItem* yeildButton = mainWindow->findChild<QQuickItem*>("yeildButton");
        if(yeildButton==nullptr)
        {
            return 0;
        }

        QObject::connect(yeildButton,SIGNAL(clicked()),&trafficLightObject,SLOT(onClickedYeild()));

            trafficLightObject.bulbColorChanged3(greenbulb1,redbulb2,redbulb1,greenbulb2,orangebulb1,orangebulb2);
            QQuickItem* goButton = mainWindow->findChild<QQuickItem*>("goButton");
            if(goButton==nullptr)
            {
                return 0;
            }

            QObject::connect(goButton,SIGNAL(clicked()),&trafficLightObject,SLOT(onClickedGo()));

    return app.exec();
}
