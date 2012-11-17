#ifndef MCFRAME_H
#define MCFRAME_H

#include <QMainWindow>
#include <QLabel>		// 以后版本可能不要
#include <QStackedLayout>

class MCFrame: public QMainWindow
{
	Q_OBJECT
public:
	MCFrame( QWidget* parent = 0 );
private slots:
	void About( void );
	void Start( void );
private:
	void CreateWidgets( void );
	void CreateMenus( void );

	QStackedLayout*		m_pMainLayout;
	QLabel*				m_pHelloPage;
	QLabel*				m_pStartPage;
};

#endif // MCFRAME_H
