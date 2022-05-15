#pragma once
#include"Core.h"

namespace Fhs
{
	class FHS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};
	//To be define in CLIENT
	Application* CreateApplication();

}

