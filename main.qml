import QtQuick 2.11
import QtQuick.Window 2.11
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

ApplicationWindow {
    visible: true
    width: 800
    height: 650
    title: qsTr("Hello World")



    ColumnLayout {
        anchors.fill: parent
        Button {
            id:button
            text: "Hello qtquick"
        }

        Image {
            id: canvas
            source: "image://sfml/"
            cache: false
        }
    }
    Timer {
        interval: 16
        repeat: true
        running: true
        onTriggered: { canvas.source = ""; canvas.source = "image://sfml/" }
    }
}
