#include <QtGui>
#include "MCFrame.h"

MCFrame::MCFrame( QWidget* parent ): QMainWindow( parent )
{
	setFixedSize( 640, 480 );
	setWindowTitle( tr( "MazeCrazy" ) );
}
