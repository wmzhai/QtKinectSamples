#pragma once

#include <QtWidgets/QWidget>
#include "ui_colorbasics.h"

class ColorBasics : public QWidget
{
	Q_OBJECT

public:
	ColorBasics(QWidget *parent = 0);
	~ColorBasics();

private:
	Ui::ColorBasicsClass ui;
};
