QT += gui-private
CONFIG += c++17 strict_c++ utf8_source warn_on
DEFINES += \
    QT_NO_CAST_FROM_ASCII \
    QT_NO_CAST_TO_ASCII \
    FRAMELESSHELPER_STATIC
RESOURCES += $$PWD/images.qrc
HEADERS += \
    $$PWD/../framelesshelper_global.h \
    $$PWD/../framelesswindowsmanager.h
SOURCES += $$PWD/../framelesswindowsmanager.cpp
win32 {
    DEFINES += WIN32_LEAN_AND_MEAN _CRT_SECURE_NO_WARNINGS
    CONFIG += windeployqt LINK_TO_SYSTEM_DLL
    CONFIG -= embed_manifest_exe
    HEADERS += $$PWD/../winnativeeventfilter.h
    SOURCES += $$PWD/../winnativeeventfilter.cpp
    LINK_TO_SYSTEM_DLL {
        DEFINES += WNEF_LINK_SYSLIB
        LIBS += -luser32 -lgdi32 -ldwmapi -lshcore -ld2d1
    }
    RC_FILE = $$PWD/windows.rc
    OTHER_FILES += $$PWD/windows.manifest
} else {
    HEADERS += $$PWD/../framelesshelper.h
    SOURCES += $$PWD/../framelesshelper.cpp
}
