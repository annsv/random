import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

ApplicationWindow {
    id: root
    visible: true
    width: 640
    height: 480
    title: qsTr("Randomizer")
    color: _style.backgroundColor


    Style {
        id: _style
    }

    Text {
        id: userList
        color: _style.textColor
        anchors {
            top: parent.top
            left: parent.left
            margins: 5
        }
    }

    Text {
        id: randomUser
        width: 200
        height: 80
        color: _style.textColor
        anchors {
            right:parent.right
            top:parent.top
        }

    }

    Button {
        id: addOBjectButton
        text: qsTr("Select User")
        anchors {
            right: parent.horizontalCenter
            left: parent.left
            bottom: parent.bottom
            margins: 5
        }

        onClicked: {
              randomUser.text = fileContent.getRandomUser()
        }
    }
    Button {

        text: qsTr("Read user from file")
        anchors {
            right: parent.right
            left: parent.horizontalCenter
            bottom: parent.bottom
            margins: 5
        }

        onClicked: {
            userList.text = ""
            var str = fileContent.getFileContent() + "\n"
            userList.text = str
        }
    }

}
