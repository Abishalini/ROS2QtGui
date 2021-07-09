#include "qtros2/main_gui.hpp"

MainGUI::MainGUI(QWidget* parent)
  : QMainWindow(parent)
{
  main_widget = new QWidget(this);
  setCentralWidget(main_widget);
}

MainGUI::~MainGUI()
{
}