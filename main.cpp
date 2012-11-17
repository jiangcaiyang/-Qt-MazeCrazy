/*
蒋彩阳
jiangcaiyang123@163.com

版本1.1

这是第二个版本。
*/

#include <QApplication>
#include <QTranslator>
#include "MCFrame.h"

int main( int argc, char** argv )
{
	QApplication app( argc, argv );
	QTranslator trans;
	trans.load( "zh_CN" );
	app.installTranslator( &trans );

	MCFrame frame;
	frame.show( );

	return app.exec( );
}
