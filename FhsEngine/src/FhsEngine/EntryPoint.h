#pragma once



#ifdef FHS_PLATFORM_WINDOW

extern Fhs::Application* Fhs::CreateApplication();

int main(int argc,char** argv)
{
	
	auto app = Fhs::CreateApplication();
	app->Run();
	delete app;
}


#endif // FHS_PLATFORM_WINDOW