/****************************************************************************
** Meta object code from reading C++ file 'mainmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Mochi-Pounders/mainmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainMenu_t {
    QByteArrayData data[18];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainMenu_t qt_meta_stringdata_MainMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MainMenu"
QT_MOC_LITERAL(1, 9, 13), // "begin_2player"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "help"
QT_MOC_LITERAL(4, 29, 8), // "settings"
QT_MOC_LITERAL(5, 38, 7), // "credits"
QT_MOC_LITERAL(6, 46, 17), // "sendTime_mainMenu"
QT_MOC_LITERAL(7, 64, 4), // "time"
QT_MOC_LITERAL(8, 69, 5), // "score"
QT_MOC_LITERAL(9, 75, 25), // "on_button_2player_clicked"
QT_MOC_LITERAL(10, 101, 14), // "show_main_menu"
QT_MOC_LITERAL(11, 116, 25), // "on_button_credits_clicked"
QT_MOC_LITERAL(12, 142, 22), // "on_button_help_clicked"
QT_MOC_LITERAL(13, 165, 26), // "on_button_settings_clicked"
QT_MOC_LITERAL(14, 192, 23), // "grab_time_from_settings"
QT_MOC_LITERAL(15, 216, 5), // "value"
QT_MOC_LITERAL(16, 222, 4), // "exit"
QT_MOC_LITERAL(17, 227, 22) // "on_button_exit_clicked"

    },
    "MainMenu\0begin_2player\0\0help\0settings\0"
    "credits\0sendTime_mainMenu\0time\0score\0"
    "on_button_2player_clicked\0show_main_menu\0"
    "on_button_credits_clicked\0"
    "on_button_help_clicked\0"
    "on_button_settings_clicked\0"
    "grab_time_from_settings\0value\0exit\0"
    "on_button_exit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    2,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    3,   88,    2, 0x08 /* Private */,
      17,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,    8,   16,
    QMetaType::Void,

       0        // eod
};

void MainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->begin_2player(); break;
        case 1: _t->help(); break;
        case 2: _t->settings(); break;
        case 3: _t->credits(); break;
        case 4: _t->sendTime_mainMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_button_2player_clicked(); break;
        case 6: _t->show_main_menu(); break;
        case 7: _t->on_button_credits_clicked(); break;
        case 8: _t->on_button_help_clicked(); break;
        case 9: _t->on_button_settings_clicked(); break;
        case 10: _t->grab_time_from_settings((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->on_button_exit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainMenu::begin_2player)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainMenu::help)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainMenu::settings)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainMenu::credits)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainMenu::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainMenu::sendTime_mainMenu)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MainMenu.data,
    qt_meta_data_MainMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainMenu.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void MainMenu::begin_2player()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainMenu::help()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainMenu::settings()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainMenu::credits()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainMenu::sendTime_mainMenu(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
