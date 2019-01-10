import QtQuick 2.9
import QtQuick.Controls 2.2

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Scroll")

    Button {
        width: 60
        height: 40
        anchors.centerIn: parent
        onClicked: {
            text = qmlCpp.getValue();
            qmlCpp.setValue(qmlCpp.getValue() + 1)
        }
    }

//    ScrollView {
//        anchors.fill: parent

//        ListView {
//            width: parent.width
//            model: 20
//            delegate: ItemDelegate {
//                text: "Item " + (index + 1)
//                width: parent.width
//            }
//        }
//    }
}
