# arraylib

Кроссплатформенная динамическая библиотека операций над массивом (калькулятор).

## Функции

- arr_sum, arr_max, arr_min, arr_average
- arr_count_positive, arr_count_negative, arr_count_zero
- arr_product, arr_median

## Сборка

cmake -S . -B build
cmake --build build -j

## Запуск

./build/app
./build/variant_18

## Тесты

cd build && ctest --output-on-failure

## Структура проекта

    include/arraylib.h      — заголовок (интерфейс)
    src/arraylib.cpp        — реализация
    src/main.cpp            — демонстрационная программа
    tests/                  — unit- и интеграционные тесты
    examples/variant_18.cpp — программа по варианту 18