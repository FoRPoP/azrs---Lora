/****************************************************************************
** Meta object code from reading C++ file 'tcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include "tcpserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpServer_t
{
  QByteArrayData data[16];
  char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len)                                       \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(                  \
      len, qptrdiff(offsetof(qt_meta_stringdata_TcpServer_t, stringdata0) + \
                    ofs - idx * sizeof(QByteArrayData)))
static const qt_meta_stringdata_TcpServer_t qt_meta_stringdata_TcpServer = {
    {
        QT_MOC_LITERAL(0, 0, 9),      // "TcpServer"
        QT_MOC_LITERAL(1, 10, 17),    // "attemptConnection"
        QT_MOC_LITERAL(2, 28, 0),     // ""
        QT_MOC_LITERAL(3, 29, 11),    // "QTcpSocket*"
        QT_MOC_LITERAL(4, 41, 3),     // "con"
        QT_MOC_LITERAL(5, 45, 16),    // "attemptStartGame"
        QT_MOC_LITERAL(6, 62, 8),     // "deckPerm"
        QT_MOC_LITERAL(7, 71, 11),    // "playersPerm"
        QT_MOC_LITERAL(8, 83, 10),    // "playedCard"
        QT_MOC_LITERAL(9, 94, 17),    // "playedCardMessage"
        QT_MOC_LITERAL(10, 112, 13),  // "newConnection"
        QT_MOC_LITERAL(11, 126, 16),  // "removeConnection"
        QT_MOC_LITERAL(12, 143, 10),  // "newMessage"
        QT_MOC_LITERAL(13, 154, 12),  // "displayError"
        QT_MOC_LITERAL(14, 167, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(15, 196, 28)   // "on_disconnectClients_clicked"

    },
    "TcpServer\0attemptConnection\0\0QTcpSocket*\0"
    "con\0attemptStartGame\0deckPerm\0playersPerm\0"
    "playedCard\0playedCardMessage\0newConnection\0"
    "removeConnection\0newMessage\0displayError\0"
    "QAbstractSocket::SocketError\0"
    "on_disconnectClients_clicked"};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpServer[] = {

    // content:
    8,       // revision
    0,       // classname
    0, 0,    // classinfo
    10, 14,  // methods
    0, 0,    // properties
    0, 0,    // enums/sets
    0, 0,    // constructors
    0,       // flags
    5,       // signalCount

    // signals: name, argc, parameters, tag, flags
    1, 1, 64, 2, 0x06 /* Public */, 5, 1, 67, 2, 0x06 /* Public */, 6, 1, 70, 2,
    0x06 /* Public */, 7, 1, 73, 2, 0x06 /* Public */, 8, 1, 76, 2,
    0x06 /* Public */,

    // slots: name, argc, parameters, tag, flags
    10, 0, 79, 2, 0x08 /* Private */, 11, 0, 80, 2, 0x08 /* Private */, 12, 0,
    81, 2, 0x08 /* Private */, 13, 1, 82, 2, 0x08 /* Private */, 15, 0, 85, 2,
    0x08 /* Private */,

    // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 4, QMetaType::Void, 0x80000000 | 3, 4,
    QMetaType::Void, 0x80000000 | 3, 4, QMetaType::Void, 0x80000000 | 3, 4,
    QMetaType::Void, QMetaType::QString, 9,

    // slots: parameters
    QMetaType::Void, QMetaType::Void, QMetaType::Void, QMetaType::Void,
    0x80000000 | 14, 2, QMetaType::Void,

    0  // eod
};

void TcpServer::qt_static_metacall(QObject* _o,
                                   QMetaObject::Call _c,
                                   int _id,
                                   void** _a)
{
  if ( _c == QMetaObject::InvokeMetaMethod )
  {
    auto* _t = static_cast<TcpServer*>(_o);
    Q_UNUSED(_t)
    switch ( _id )
    {
      case 0:
        _t->attemptConnection((*reinterpret_cast<QTcpSocket*(*)>(_a[1])));
        break;
      case 1:
        _t->attemptStartGame((*reinterpret_cast<QTcpSocket*(*)>(_a[1])));
        break;
      case 2:
        _t->deckPerm((*reinterpret_cast<QTcpSocket*(*)>(_a[1])));
        break;
      case 3:
        _t->playersPerm((*reinterpret_cast<QTcpSocket*(*)>(_a[1])));
        break;
      case 4:
        _t->playedCard((*reinterpret_cast<QString(*)>(_a[1])));
        break;
      case 5:
        _t->newConnection();
        break;
      case 6:
        _t->removeConnection();
        break;
      case 7:
        _t->newMessage();
        break;
      case 8:
        _t->displayError(
            (*reinterpret_cast<QAbstractSocket::SocketError(*)>(_a[1])));
        break;
      case 9:
        _t->on_disconnectClients_clicked();
        break;
      default:;
    }
  }
  else if ( _c == QMetaObject::RegisterMethodArgumentMetaType )
  {
    switch ( _id )
    {
      default:
        *reinterpret_cast<int*>(_a[0]) = -1;
        break;
      case 0:
        switch ( *reinterpret_cast<int*>(_a[1]) )
        {
          default:
            *reinterpret_cast<int*>(_a[0]) = -1;
            break;
          case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType<QTcpSocket*>();
            break;
        }
        break;
      case 1:
        switch ( *reinterpret_cast<int*>(_a[1]) )
        {
          default:
            *reinterpret_cast<int*>(_a[0]) = -1;
            break;
          case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType<QTcpSocket*>();
            break;
        }
        break;
      case 2:
        switch ( *reinterpret_cast<int*>(_a[1]) )
        {
          default:
            *reinterpret_cast<int*>(_a[0]) = -1;
            break;
          case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType<QTcpSocket*>();
            break;
        }
        break;
      case 3:
        switch ( *reinterpret_cast<int*>(_a[1]) )
        {
          default:
            *reinterpret_cast<int*>(_a[0]) = -1;
            break;
          case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType<QTcpSocket*>();
            break;
        }
        break;
      case 8:
        switch ( *reinterpret_cast<int*>(_a[1]) )
        {
          default:
            *reinterpret_cast<int*>(_a[0]) = -1;
            break;
          case 0:
            *reinterpret_cast<int*>(_a[0]) =
                qRegisterMetaType<QAbstractSocket::SocketError>();
            break;
        }
        break;
    }
  }
  else if ( _c == QMetaObject::IndexOfMethod )
  {
    int* result = reinterpret_cast<int*>(_a[0]);
    {
      using _t = void (TcpServer::*)(QTcpSocket*);
      if ( *reinterpret_cast<_t*>(_a[1]) ==
           static_cast<_t>(&TcpServer::attemptConnection) )
      {
        *result = 0;
        return;
      }
    }
    {
      using _t = void (TcpServer::*)(QTcpSocket*);
      if ( *reinterpret_cast<_t*>(_a[1]) ==
           static_cast<_t>(&TcpServer::attemptStartGame) )
      {
        *result = 1;
        return;
      }
    }
    {
      using _t = void (TcpServer::*)(QTcpSocket*);
      if ( *reinterpret_cast<_t*>(_a[1]) ==
           static_cast<_t>(&TcpServer::deckPerm) )
      {
        *result = 2;
        return;
      }
    }
    {
      using _t = void (TcpServer::*)(QTcpSocket*);
      if ( *reinterpret_cast<_t*>(_a[1]) ==
           static_cast<_t>(&TcpServer::playersPerm) )
      {
        *result = 3;
        return;
      }
    }
    {
      using _t = void (TcpServer::*)(QString);
      if ( *reinterpret_cast<_t*>(_a[1]) ==
           static_cast<_t>(&TcpServer::playedCard) )
      {
        *result = 4;
        return;
      }
    }
  }
}

QT_INIT_METAOBJECT const QMetaObject TcpServer::staticMetaObject = {
    {&QWidget::staticMetaObject, qt_meta_stringdata_TcpServer.data,
     qt_meta_data_TcpServer, qt_static_metacall, nullptr, nullptr}};


const QMetaObject* TcpServer::metaObject() const
{
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject()
                                    : &staticMetaObject;
}

void* TcpServer::qt_metacast(const char* _clname)
{
  if ( !_clname )
    return nullptr;
  if ( !strcmp(_clname, qt_meta_stringdata_TcpServer.stringdata0) )
    return static_cast<void*>(this);
  return QWidget::qt_metacast(_clname);
}

int TcpServer::qt_metacall(QMetaObject::Call _c, int _id, void** _a)
{
  _id = QWidget::qt_metacall(_c, _id, _a);
  if ( _id < 0 )
    return _id;
  if ( _c == QMetaObject::InvokeMetaMethod )
  {
    if ( _id < 10 )
      qt_static_metacall(this, _c, _id, _a);
    _id -= 10;
  }
  else if ( _c == QMetaObject::RegisterMethodArgumentMetaType )
  {
    if ( _id < 10 )
      qt_static_metacall(this, _c, _id, _a);
    _id -= 10;
  }
  return _id;
}

// SIGNAL 0
void TcpServer::attemptConnection(QTcpSocket* _t1)
{
  void* _a[] = {nullptr,
                const_cast<void*>(reinterpret_cast<const void*>(&_t1))};
  QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpServer::attemptStartGame(QTcpSocket* _t1)
{
  void* _a[] = {nullptr,
                const_cast<void*>(reinterpret_cast<const void*>(&_t1))};
  QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TcpServer::deckPerm(QTcpSocket* _t1)
{
  void* _a[] = {nullptr,
                const_cast<void*>(reinterpret_cast<const void*>(&_t1))};
  QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TcpServer::playersPerm(QTcpSocket* _t1)
{
  void* _a[] = {nullptr,
                const_cast<void*>(reinterpret_cast<const void*>(&_t1))};
  QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TcpServer::playedCard(QString _t1)
{
  void* _a[] = {nullptr,
                const_cast<void*>(reinterpret_cast<const void*>(&_t1))};
  QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
