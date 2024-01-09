#pragma once
#ifdef DHA_PLATFORM_WINDOWS

extern Dhage::Application* Dhage::CreateApplication();

int main(int argc, char* argv[])
{
	printf("DHA GAME ENGINE\n");
	auto app = Dhage::CreateApplication();
	app->Run();
	delete app;
}


#endif