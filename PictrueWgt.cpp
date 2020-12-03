#include "PictrueWgt.h"
#include <QPainter>

PitureLabel::PitureLabel(QWidget *parent /*= Q_NULLPTR*/)
	: QLabel(parent)
{

}

PitureLabel::~PitureLabel()
{

}

void PitureLabel::loadImagePath(const QString &imagePath)
{
	m_imagePath = imagePath;

	m_pix.load(m_imagePath);
}

void PitureLabel::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);



	//painter.drawPixmap(0, 0, 100, 33, pix);


	painter.drawPixmap(0, 0, this->width(), this->height(), m_pix);
}
