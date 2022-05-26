#pragma once
#include <string>
#include <glm/glm.hpp>
#include <entt/entt.hpp>
class IPlatform
{
public:
	virtual int InitWindow() = 0;
	virtual long Run() = 0;
	virtual void* GetWindowHandle() = 0;
	virtual void* GetDeviceContext() = 0;
	virtual ~IPlatform() {};
};
