#pragma once

#include "../component.h"

class Transform : public Component
{
public:
	float x, y;
	float scaleX, scaleY;
	int depth;

public:
	Transform(const float x = 0, const float y = 0, const float scaleX = 1, const float scaleY = 1, const int depth = 0)
	{
		this->x = x;
		this->y = y;
		this->scaleX = scaleX;
		this->scaleY = scaleY;
		this->depth = depth;
	}
};