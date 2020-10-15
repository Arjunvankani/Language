from PyQt4.QtCore import *
from PyQt4.QtGui import *
import sys


class Helloworld(QDialog):
    def __init__(self):
        QDialog.__init__(self)

        layout = QVBoxLayout()

        label = QLabel("Hello ")
        line_edit = QLineEdit()
        button = QPushButton("Close")

        layout.addwidget(label)
        layout.addwidget(line_edit)
        layout.addwidget(button)

        self.setLayout(layout)
        

app = QApplication(sys.argv)
dialog = Helloworld()
dialog.show()
app.exec_()
