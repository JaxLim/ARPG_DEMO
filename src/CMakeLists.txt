set(SOURCES
    main.cpp
    MainWindow.cpp
    MainWindow.h
)

add_executable(ARPG_DEMO ${SOURCES})

target_link_libraries(ARPG_DEMO PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
