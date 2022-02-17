#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>

using namespace std;
using namespace sf;

int main() {

	Texture BackgroundT, IconT; // Тектуры для спрайтов
	Sprite BackgroundS, IconS; // Спрайты

	RenderWindow win(VideoMode(800, 600), ("Client")); // Создание окна
	while (win.isOpen()) {

        Vector2i pixelPos = Mouse::getPosition(win); // Для работы мышки
        Vector2i pos = Mouse::getPosition(win);

        pixelPos.x;

        Event event;
        while (win.pollEvent(event)) // Возможность закрыть окно
        {
            if (event.type == Event::Closed)
                win.close();
        }

        win.clear(); // очистка экрана
        win.display(); // вывод на экран


        if (event.type == Event::MouseButtonPressed) { // Реализация для нажатия кнопки мышки
            if (event.key.code == Mouse::Left){ // Проверка на нажатие левой кнопки мыши

            }
        }
	}

	return 0;
}