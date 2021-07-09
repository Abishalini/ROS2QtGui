#pragma once

#include <QMainWindow>
#include <QWidget>

class MainGUI : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainGUI(QWidget* parent = nullptr);
    ~MainGUI() override;
private:
    QWidget* main_widget;
};