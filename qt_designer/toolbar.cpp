#include <toolbar.h>
#include <QFileDialog>
#include <QTranslator>
#include <QString>
#include <QMessageBox>


void AddressBook::saveToFile()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "/home/jana/untitled.png", tr("Images (*.png *.xpm *.jpg)"));
}