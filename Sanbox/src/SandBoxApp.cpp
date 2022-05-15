#include"Fhs.h"

class SandBox:public Fhs::Application
{
public:
	SandBox() 
	{
	}
	~SandBox() 
	{
	}

private:

};

Fhs::Application* Fhs::CreateApplication()
{
	return new SandBox();
}