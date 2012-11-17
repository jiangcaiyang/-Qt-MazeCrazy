#ifndef MCFRAME_H
#define MCFRAME_H

#include <QMainWindow>

#include "MCWidget.h"

class MCFrame: public QMainWindow
{
	Q_OBJECT
public:
	MCFrame( QWidget* parent = 0 );
private slots:
	void About( void );
    //void Start( void );
private:
    //void CreateWidgets( void );
	void CreateMenus( void );

    MCWidget*           m_pWidget;

	QStackedLayout*		m_pMainLayout;
	QLabel*				m_pHelloPage;
	QLabel*				m_pStartPage;
};

#endif // MCFRAME_H
