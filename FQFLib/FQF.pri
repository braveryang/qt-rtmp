INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

INCLUDEPATH += D:\ffmpeg\include
LIBS += -LD:\ffmpeg\lib -lavutil -lavformat -lavcodec -lswscale

HEADERS += \
    $$PWD/FQFCore/FQFCore.h \
	$$PWD/FQFMedia/FQFMedia.h \
    $$PWD/FQFMedia/FQFMediaPlayer.h \
    $$PWD/FQFMediaWidget/FQFMediaThumbnail.h \
    $$PWD/FQFMediaWidget/FQFMediaWidget.h
    

SOURCES += \
    $$PWD/FQFCore/FQFCore.cpp \
	$$PWD/FQFMedia/FQFMedia.cpp \
    $$PWD/FQFMedia/FQFMediaPlayer.cpp \
    $$PWD/FQFMediaWidget/FQFMediaThumbnail.cpp \
    $$PWD/FQFMediaWidget/FQFMediaWidget.cpp
    
