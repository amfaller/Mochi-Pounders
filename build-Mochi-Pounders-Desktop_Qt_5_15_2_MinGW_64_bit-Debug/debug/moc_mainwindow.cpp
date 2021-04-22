/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Mochi-Pounders/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "show_main_menu"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "send_scores"
QT_MOC_LITERAL(4, 39, 3), // "red"
QT_MOC_LITERAL(5, 43, 4), // "blue"
QT_MOC_LITERAL(6, 48, 4), // "bonk"
QT_MOC_LITERAL(7, 53, 8), // "isBonked"
QT_MOC_LITERAL(8, 62, 27), // "on_HammerButton_Red_clicked"
QT_MOC_LITERAL(9, 90, 28), // "on_HammerButton_Blue_clicked"
QT_MOC_LITERAL(10, 119, 11), // "update_time"
QT_MOC_LITERAL(11, 131, 13), // "setColorState"
QT_MOC_LITERAL(12, 145, 5), // "state"
QT_MOC_LITERAL(13, 151, 22), // "on_PauseButton_clicked"
QT_MOC_LITERAL(14, 174, 6), // "resume"
QT_MOC_LITERAL(15, 181, 7), // "cleanup"
QT_MOC_LITERAL(16, 189, 15), // "changeTime_game"
QT_MOC_LITERAL(17, 205, 4), // "time"
QT_MOC_LITERAL(18, 210, 5), // "score"
QT_MOC_LITERAL(19, 216, 9), // "game_over"
QT_MOC_LITERAL(20, 226, 8), // "redScore"
QT_MOC_LITERAL(21, 235, 9) // "blueScore"

    },
    "MainWindow\0show_main_menu\0\0send_scores\0"
    "red\0blue\0bonk\0isBonked\0"
    "on_HammerButton_Red_clicked\0"
    "on_HammerButton_Blue_clicked\0update_time\0"
    "setColorState\0state\0on_PauseButton_clicked\0"
    "resume\0cleanup\0changeTime_game\0time\0"
    "score\0game_over\0redScore\0blueScore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    2,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   80,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,
      16,    2,   92,    2, 0x08 /* Private */,
      19,    2,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_main_menu(); break;
        case 1: _t->send_scores((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->bonk((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_HammerButton_Red_clicked(); break;
        case 4: _t->on_HammerButton_Blue_clicked(); break;
        case 5: _t->update_time(); break;
        case 6: _t->setColorState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_PauseButton_clicked(); break;
        case 8: _t->resume(); break;
        case 9: _t->cleanup(); break;
        case 10: _t->changeTime_game((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->game_over((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::show_main_menu)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::send_scores)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::show_main_menu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::send_scores(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
