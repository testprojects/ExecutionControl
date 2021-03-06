/****************************************************************************
** Form implementation generated from reading ui file 'edittopicdialogbase.ui'
**
** Created: Пт 4. мар 18:06:34 2011
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.3   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "edittopicdialogbase.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qdatetimeedit.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qcombobox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a EditTopicDialogBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
EditTopicDialogBase::EditTopicDialogBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "EditTopicDialogBase" );
    EditTopicDialogBaseLayout = new QGridLayout( this, 1, 1, 11, 6, "EditTopicDialogBaseLayout"); 

    textLabel1 = new QLabel( this, "textLabel1" );
    textLabel1->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    EditTopicDialogBaseLayout->addWidget( textLabel1, 0, 0 );

    textLabel1_2_2_2 = new QLabel( this, "textLabel1_2_2_2" );
    textLabel1_2_2_2->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    EditTopicDialogBaseLayout->addWidget( textLabel1_2_2_2, 3, 0 );

    textLabel1_2_2_2_2 = new QLabel( this, "textLabel1_2_2_2_2" );
    textLabel1_2_2_2_2->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    EditTopicDialogBaseLayout->addWidget( textLabel1_2_2_2_2, 4, 0 );

    dateDateEdit = new QDateEdit( this, "dateDateEdit" );
    dateDateEdit->setDate( QDate( 2000, 1, 1 ) );

    EditTopicDialogBaseLayout->addWidget( dateDateEdit, 3, 1 );

    topicLineEdit = new QLineEdit( this, "topicLineEdit" );
    topicLineEdit->setFrameShape( QLineEdit::LineEditPanel );
    topicLineEdit->setFrameShadow( QLineEdit::Sunken );

    EditTopicDialogBaseLayout->addMultiCellWidget( topicLineEdit, 0, 0, 1, 4 );

    stampLineEdit = new QLineEdit( this, "stampLineEdit" );
    stampLineEdit->setFrameShape( QLineEdit::LineEditPanel );
    stampLineEdit->setFrameShadow( QLineEdit::Sunken );

    EditTopicDialogBaseLayout->addMultiCellWidget( stampLineEdit, 4, 4, 1, 4 );

    cancelButton = new QPushButton( this, "cancelButton" );
    cancelButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "block_16.png" ) ) );

    EditTopicDialogBaseLayout->addWidget( cancelButton, 5, 4 );

    editButton = new QPushButton( this, "editButton" );
    editButton->setEnabled( FALSE );
    editButton->setDefault( TRUE );
    editButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "pencil_16.png" ) ) );

    EditTopicDialogBaseLayout->addWidget( editButton, 5, 3 );
    spacer1 = new QSpacerItem( 360, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    EditTopicDialogBaseLayout->addMultiCell( spacer1, 5, 5, 0, 2 );
    spacer1_2 = new QSpacerItem( 330, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    EditTopicDialogBaseLayout->addMultiCell( spacer1_2, 3, 3, 2, 4 );

    textLabel1_2 = new QLabel( this, "textLabel1_2" );
    textLabel1_2->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    EditTopicDialogBaseLayout->addWidget( textLabel1_2, 2, 0 );

    executiveComboBox = new QComboBox( FALSE, this, "executiveComboBox" );

    EditTopicDialogBaseLayout->addMultiCellWidget( executiveComboBox, 2, 2, 1, 4 );

    skbComboBox = new QComboBox( FALSE, this, "skbComboBox" );

    EditTopicDialogBaseLayout->addMultiCellWidget( skbComboBox, 1, 1, 1, 4 );

    textLabel1_2_2 = new QLabel( this, "textLabel1_2_2" );
    textLabel1_2_2->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    EditTopicDialogBaseLayout->addWidget( textLabel1_2_2, 1, 0 );
    languageChange();
    resize( QSize(544, 180).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelButton, SIGNAL( clicked() ), this, SLOT( close() ) );

    // tab order
    setTabOrder( topicLineEdit, skbComboBox );
    setTabOrder( skbComboBox, executiveComboBox );
    setTabOrder( executiveComboBox, dateDateEdit );
    setTabOrder( dateDateEdit, stampLineEdit );
    setTabOrder( stampLineEdit, editButton );
    setTabOrder( editButton, cancelButton );
}

/*
 *  Destroys the object and frees any allocated resources
 */
EditTopicDialogBase::~EditTopicDialogBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void EditTopicDialogBase::languageChange()
{
    setCaption( trUtf8( "\xd0\xa0\xd0\xb5\xd0\xb4\xd0\xb0\xd0\xba\xd1\x82\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c\x20\xd1\x82\xd0\xb5\xd0\xbc\xd1\x83" ) );
    textLabel1->setText( trUtf8( "\xd0\x9d\xd0\xb0\xd0\xb8\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xbe\xd0\xb2\xd0\xb0\xd0\xbd\xd0\xb8\xd0\xb5\x3a" ) );
    textLabel1_2_2_2->setText( trUtf8( "\xd0\xa1\xd1\x80\xd0\xbe\xd0\xba\x20\xd0\xb8\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd0\xbd\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f\x3a" ) );
    textLabel1_2_2_2_2->setText( trUtf8( "\xd0\x9e\xd1\x82\xd0\xbc\xd0\xb5\xd1\x82\xd0\xba\xd0\xb0\x20\xd0\xbe\xd0\xb1\x20\xd0\xb8\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd0\xbd\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb8\x3a" ) );
    cancelButton->setText( trUtf8( "\xd0\x9e\xd1\x82\xd0\xbc\xd0\xb5\xd0\xbd\xd0\xb0" ) );
    editButton->setText( trUtf8( "\xd0\xa0\xd0\xb5\xd0\xb4\xd0\xb0\xd0\xba\xd1\x82\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8c" ) );
    textLabel1_2->setText( trUtf8( "\xd0\x98\xd1\x81\xd0\xbf\xd0\xbe\xd0\xbb\xd0\xbd\xd0\xb8\xd1\x82\xd0\xb5\xd0\xbb\xd1\x8c\x3a" ) );
    textLabel1_2_2->setText( trUtf8( "\xd0\xa1\xd0\x9a\xd0\x91\x3a" ) );
}

