#pragma once


#ifdef PEANUT_PLATFORM_WINDOWS

extern Peanut::Application* Peanut::CreateApplication();

	int main(int argc, char** argv) 
	{
		auto app = Peanut::CreateApplication();
		app->Run();
		delete app;
	}

#endif