#pragma once

class Input
{
public:
	enum KEY_STATE{ UP, DOWN, PRESS, RELEASE };

	bool init(const class Window &window);
	bool update();
	bool term();

	KEY_STATE getKeyState(int key) const
	{
		return keys[key];
	}

private:
	struct GLFWwindow *winHandle;
	KEY_STATE keys[350];

	double mouseX, mouseY;
	float mouseH, mouseV;
};