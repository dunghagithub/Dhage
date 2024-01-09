#include <Dhage.h>
class Sandbox : public Dhage::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};


Dhage::Application* Dhage::CreateApplication()
{
	return new Sandbox();
}