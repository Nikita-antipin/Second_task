project(main)

cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

add_executable(main main.cpp String.h String.cpp)		# Создает исполняемый файл с именем main
									# из исходника main.cpp