#pragma once
class SceneBase
{
public:

	 ~SceneBase() {};

	virtual SceneBase* Update() = 0;

	virtual void Draw() const = 0;
};

