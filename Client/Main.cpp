#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>

using namespace std;
using namespace sf;

int main() {

	Texture BackgroundT, IconT; // ������� ��� ��������
	Sprite BackgroundS, IconS; // �������

	RenderWindow win(VideoMode(800, 600), ("Client")); // �������� ����
	while (win.isOpen()) {

        Vector2i pixelPos = Mouse::getPosition(win); // ��� ������ �����
        Vector2i pos = Mouse::getPosition(win);

        pixelPos.x;

        Event event;
        while (win.pollEvent(event)) // ����������� ������� ����
        {
            if (event.type == Event::Closed)
                win.close();
        }

        win.clear(); // ������� ������
        win.display(); // ����� �� �����


        if (event.type == Event::MouseButtonPressed) { // ���������� ��� ������� ������ �����
            if (event.key.code == Mouse::Left){ // �������� �� ������� ����� ������ ����

            }
        }
	}

	return 0;
}