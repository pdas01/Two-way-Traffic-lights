import QtQuick 2.8
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtQml 2.2

Window {
    id: window
    visible: true
    width: 800
    height: 800
    color: "black"
    title: qsTr("Traffic Light Signals")


    Rectangle{
        id:firstLights
        width: 200
        height: 500
        color:"yellow"
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -130
        anchors.horizontalCenter: parent.horizontalCenter

        Rectangle{
            id:redBulbSlot1
            width: 98
            height:100
            radius:height/2
            objectName: "redBulb1"
            anchors.left: parent.left
            anchors.leftMargin: 51
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 368
            anchors.top: parent.top
            anchors.topMargin: 31
            anchors.horizontalCenter: parent.horizontalCenter
            color:"black"

        }
        Rectangle{
            id:yeildBulbSlot1
            objectName: "orangeBulb1"
            width: 100
            height:100
            radius:height/2
            anchors.bottom: goBulbSlot1.top
            anchors.bottomMargin: 58
            anchors.left: parent.left
            anchors.leftMargin: 51
            anchors.top: redBulbSlot1.bottom
            anchors.topMargin: 51
            color:"black"


        }
        Rectangle{
            id:goBulbSlot1
            width: 100
            height:100
            objectName: "greenBulb1"
            radius:height/2
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 57
            anchors.top:parent.top
            anchors.topMargin: 342
            anchors.left: redBulbSlot1.right
            anchors.leftMargin: -98
            color:"black"



        }


    }

    Rectangle{
        id:secondLights
        y: 0
        width: 200
        height: 500
        color:"yellow"
        transformOrigin: Item.Center
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 182
        anchors.horizontalCenter: parent.horizontalCenter

        Rectangle{
            id:redBulbSlot2
            objectName: "redBulb2"
            width: 100
            height:100
            radius:height/2
            anchors.left: parent.left
            anchors.leftMargin: 51
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 368
            anchors.top: parent.top
            anchors.topMargin: 31
            anchors.horizontalCenter: parent.horizontalCenter
            color:"black"


        }
        Rectangle{
            id:yeildBulbSlot2
            objectName: "orangeBulb2"
            width: 100
            height:100
            radius:height/2
            anchors.bottom: greenBulbSlot2.top
            anchors.bottomMargin: 58
            anchors.left: parent.left
            anchors.leftMargin: 51
            anchors.top: redBulbSlot2.bottom
            anchors.topMargin: 51
            color:"black"


        }
        Rectangle{
            id:greenBulbSlot2
            objectName: "greenBulb2"
            width: 100
            height:100
            radius:height/2
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 57
            anchors.top:parent.top
            anchors.topMargin: 342
            anchors.left: parent.left
            anchors.leftMargin: 51
            color:"black"



        }
    }

        Button{
            id:stopButton
            objectName: "stopButton"
            x: -303
            height:50
            width:150
            text:"STOP"
            anchors.top:parent.top
            anchors.topMargin: 709
            anchors.left:firstLights.left

        }
        Button{
            id:yeildButton
            objectName: "yeildButton"
            x: -303
            text: "YEILD"
            anchors.right: goButton.left
            anchors.rightMargin: 30
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 41
            anchors.top:parent.top
            anchors.topMargin: 709
            anchors.left:stopButton.right
            anchors.leftMargin: 20
        }
        Button{
            id:goButton
            objectName: "goButton"
            x: 520
            width: 150
            text:"GO"
            anchors.right: parent.right
            anchors.rightMargin: 130
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 41
            anchors.top:parent.top
            anchors.topMargin: 709
        }




    }

