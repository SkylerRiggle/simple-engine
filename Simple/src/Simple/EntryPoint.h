#pragma once
#include "Application.h"

#ifdef SMPL_PLATFORM_WINDOWS

extern Simple::Application* Simple::CreateApplication();

int main(int argc, char** argv) {
	auto app = Simple::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif