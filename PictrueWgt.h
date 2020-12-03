
#include <QLabel>

class PitureLabel : public QLabel
{
	Q_OBJECT

public:
	PitureLabel(QWidget *parent = Q_NULLPTR);
	~PitureLabel();

	void loadImagePath(const QString &imagePath);
private:
	QString m_imagePath{ "" };
	QPixmap m_pix;
protected:
	void paintEvent(QPaintEvent* event);

};
