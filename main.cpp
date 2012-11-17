/*
蒋彩阳
jiangcaiyang123@163.com

版本1.1

这是第二个版本。
*/

#include <QApplication>
#include <QTranslator>
#include "DiagramViewApp.h"

int main( int argc, char** argv )
{
	QApplication app( argc, argv );
	QTranslator trans;
	trans.load( "zh_CN" );
	app.installTranslator( &trans );
/*
	DiagramViewApp view;
	view.show( );
*/
	return app.exec( );
}
