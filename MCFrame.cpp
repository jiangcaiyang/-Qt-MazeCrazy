#include <QtGui>
#include "MCFrame.h"

MCFrame::MCFrame( QWidget* parent ): QMainWindow( parent )
{
    m_pWidget = new MCWidget( this );
    setCentralWidget( m_pWidget );

    //CreateWidgets( );
	CreateMenus( );

	setFixedSize( 640, 480 );
	setWindowTitle( tr( "MazeCrazy" ) );
}
//-----------------------------------------------------------------------------
void MCFrame::CreateMenus( void )
{
	QMenu* pMazeMenu		= new QMenu( tr( "Maze" ), this );
	QMenu* pHelpMenu		= new QMenu( tr( "Help" ), this );

	QAction* pAboutAction	= new QAction( tr( "About..." ), this );
	QAction* pAboutQtAction	= new QAction( tr( "AboutQt" ), this );
	QAction* pStartAction	= new QAction( tr( "Start" ), this );
	QAction* pOptionAction	= new QAction( tr( "Option" ), this );

	connect( pAboutAction, SIGNAL( triggered( ) ),
			 this, SLOT( About( ) ) );
	connect( pAboutQtAction, SIGNAL( triggered( ) ),
			 qApp, SLOT( aboutQt( ) ) );
	connect( pStartAction, SIGNAL( triggered( ) ),
             m_pWidget, SLOT( Start( ) ) );

	pMazeMenu->addAction( pStartAction );
	pHelpMenu->addAction( pAboutAction );
	pHelpMenu->addAction( pAboutQtAction );

	menuBar( )->addMenu( pMazeMenu );
	menuBar( )->addAction( pOptionAction );
	menuBar( )->addSeparator( );
	menuBar( )->addMenu( pHelpMenu );
}
//-----------------------------------------------------------------------------
void MCFrame::About( void )
{
	QMessageBox::about( this, tr( "MazeCrazy" ),
						tr( "<h1>Thank You For visiting me.</h1>" ) );
}
/*
//-----------------------------------------------------------------------------
void MCFrame::CreateWidgets( void )
{
	m_pHelloPage	= new QLabel( tr( "<h1>This is Hello Page</h1>" ) );
	m_pStartPage	= new QLabel( tr( "<h1>This is Start Page</h1>" ) );
	m_pMainLayout	= new QStackedLayout;

	m_pMainLayout->addWidget( m_pHelloPage );
	m_pMainLayout->addWidget( m_pStartPage );
	m_pMainLayout->setCurrentIndex( 0 );
	setCentralWidget( m_pMainLayout );
}*/
/*
//-----------------------------------------------------------------------------
void MCFrame::Start( void )
{
	m_pMainLayout->setCurrentIndex( 1 );
}*/
