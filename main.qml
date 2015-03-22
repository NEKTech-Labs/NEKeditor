import QtQuick 2.1
import QtQuick.Layouts 1.0
import QtQuick.Window 2.0
import QtQuick.Controls 1.2
import QtQuick.Dialogs 1.2
import org.qtproject.example 1.0


Window {
    visible: true
    width: 360
    height: 360
    TextArea {
        Accessible.name: "document"
        id: textArea
        x: 0
        y: 25
        width: parent.width
        anchors.bottom: parent.height/2
        baseUrl: "qrc:/"
        text: document.text
        font.pointSize: 12
        font.bold: false
        textFormat: textArea.AutoText
        Component.onCompleted: forceActiveFocus()
    }


    Rectangle{
        id:button
        width: 210
        height: 56
        color: "#a0a3db"
        radius: 23
        border.width: 1
        Text {
            id: txtopen
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            text: qsTr("Press me")
        }
        anchors.verticalCenterOffset: 74
        anchors.horizontalCenterOffset: 7
        anchors.centerIn: parent

        MouseArea {
            anchors.fill: parent
            onClicked: {
              //  Qt.quit();
            fileDialog.open();

            }
        }

    }

    FileDialog{
        id: fileDialog
        nameFilters: ["Text files (*.txt)", "C Programs (*.c)"]
        onAccepted: document.fileUrl = fileUrl
    }

    DocumentHandler{
        id: document
        target: textArea
       // cursorPosition: textArea.cursorPosition
        //selectionStart: textArea.selectionStart
        //selectionEnd: textArea.selectionEnd
        Component.onCompleted: document.fileUrl = "qrc:/file/test.c"
        }

}
