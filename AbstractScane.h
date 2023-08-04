#pragma once
class AbstractScane
{
public:

	virtual ~AbstractScane() {};

	virtual AbstractScane* Update() = 0;

	virtual void Draw() const = 0;
};

