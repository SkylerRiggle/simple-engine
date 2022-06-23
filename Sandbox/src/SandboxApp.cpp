#include <Simple.h>

class Sandbox : public Simple::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Simple::Application* Simple::CreateApplication() {
	return new Sandbox();
}