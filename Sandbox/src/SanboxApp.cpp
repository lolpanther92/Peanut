#include <Peanut.h>


class Sandbox : public Peanut::Application
{
	public:
		Sandbox() {};
		~Sandbox() {};
};

Peanut::Application* Peanut::CreateApplication() {
	return new Sandbox();
}