#pragma once
class SceneBase
{
public:

	virtual ~SceneBase() {};

	virtual SceneBase* Update() = 0;

	virtual void Draw() const = 0;
};

