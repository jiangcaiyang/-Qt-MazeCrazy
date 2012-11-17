#include "MCWidget.h"

MCWidget::MCWidget( QWidget* parent ): QWidget( parent )
{
    m_pHelloPage	= new QLabel( tr( "<h1>This is Hello Page</h1>" ) );
    m_pStartPage	= new QLabel( tr( "<h1>This is Start Page</h1>" ) );
    m_pMainLayout	= new QStackedLayout;

    m_pMainLayout->addWidget( m_pHelloPage );
    m_pMainLayout->addWidget( m_pStartPage );
    //m_pMainLayout->setCurrentIndex( 0 );
    setLayout( m_pMainLayout );
}

void MCWidget::Start( void )
{
    m_pMainLayout->setCurrentIndex( 1 );
}
