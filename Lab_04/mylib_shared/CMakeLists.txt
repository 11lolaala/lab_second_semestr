cmake_minimum_required(VERSION 3.15)
set(PROJECT_NAME mylib_shared)
project("${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 20)

# Находим все исходные файлы
# Явно перечисляем файлы (рекомендуется для надежности)
set(SOURCES
    src/functions.cpp
    # добавьте другие .cpp файлы если есть
    # src/other.cpp
)

set(HEADERS
    inc/functions.hpp
    # добавьте другие .h/.hpp файлы если есть
    # inc/other.hpp
)

# ИЛИ используем GLOB для автоматического поиска (проще если файлов много)
# file(GLOB SOURCES "src/*.cpp")
# file(GLOB HEADERS "inc/*.h" "inc/*.hpp")

# Создаем библиотеку, включая заголовки для отображения в IDE
add_library("${PROJECT_NAME}" SHARED ${SOURCES} ${HEADERS})

# Указываем где искать заголовочные файлы
target_include_directories("${PROJECT_NAME}" PUBLIC inc)

# Группируем файлы для Qt Creator
source_group("Source Files" FILES ${SOURCES})
source_group("Header Files" FILES ${HEADERS})

# Install (раскомментируйте когда будете готовы к установке)
# set_target_properties(${PROJECT_NAME} PROPERTIES
#     PUBLIC_HEADER "${HEADERS}"
# )

# install(TARGETS ${PROJECT_NAME}
#     ARCHIVE DESTINATION lib
#     LIBRARY DESTINATION bin
#     PUBLIC_HEADER DESTINATION include/${PROJECT_NAME}
# )
