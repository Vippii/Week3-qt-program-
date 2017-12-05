#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "edititemdialog.h"
#include <QMessageBox>
#include "stockitem.h"
#include "stockitemlistmodel.h"
#include <QAction>
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listView->setModel( &stockList );
    ui->listView->setSelectionBehavior( QAbstractItemView::SelectItems );
	connect( ui->AddButton, &QPushButton::released, this, &MainWindow::handleAddButton );
	connect( ui->EditButton, &QPushButton::released, this, &MainWindow::handleEditButton );
	connect( ui->RemoveButton, &QPushButton::released, this, &MainWindow::handleRemoveButton );
	connect( ui->saveButton, &QAction::triggered, this, &MainWindow::savedFile);
	connect( this, &MainWindow::statusUpdateMessage, ui->statusBar, &QStatusBar::showMessage );
	
	
}

MainWindow::~MainWindow() {
	delete ui;}	



void MainWindow::savedFile(){
	QString fileName = QFileDialog::getSaveFileName(this, tr("Save stock list to a file"), "/home/jana/untitled.txt", tr("Text Files (*.txt *.docx);;All Files (*)"));
	
	stockList.savedFile(fileName);
	emit statusUpdateMessage( QString("File saved"), 0 );




}



	




void MainWindow::handleAddButton() {
	QMessageBox msgBox;
	msgBox.setText("Add button was clicked");
	msgBox.exec();
	emit statusUpdateMessage( QString("Add button was clicked"), 0 );

	StockItem item;
	stockList.addItem( item );
	emit statusUpdateMessage( QString("Add button was clicked"), 0 );
}

void MainWindow::handleEditButton() {
QMessageBox msgBox;
msgBox.setText("Edit button was clicked");
msgBox.exec();
emit statusUpdateMessage( QString("Edit button was clicked"), 0 );

EditItemDialog dialog( this );
QModelIndexList selectedList;
selectedList = ui->listView->selectionModel()->selectedIndexes();
if( selectedList.length() == 1 ) {// selectedList is a list of all selected items in the listView. Since we set its
// behaviour to single selection, were only interested in the first selecteded item.
StockItem item = stockList.getItem( selectedList[0] );
if( dialog.runDialog( item ) ) {
// user clicked ok, need to update item in list...
stockList.setItem( item, selectedList[0] );
}
} else {
emit statusUpdateMessage( QString("No item selected to edit!"), 0 );
}
}

void MainWindow::handleRemoveButton() {
QMessageBox msgBox;
msgBox.setText("Remove button was clicked");
msgBox.exec();
emit statusUpdateMessage( QString("Remove button was clicked"), 0 );







	
	
















}