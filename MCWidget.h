#ifndef MCWIDGET_H
#define MCWIDGET_H

#include <QWidget>
#include <QLabel>		// 以后版本可能不要
#include <QStackedLayout>

class MCWidget: public QWidget
{
    Q_OBJECT
public:
    MCWidget( QWidget* parent = 0 );
private slots:
    void Start( void );
private:
    QStackedLayout*		m_pMainLayout;
    QLabel*				m_pHelloPage;
    QLabel*				m_pStartPage;
};

#endif // MCWIDGET_H
