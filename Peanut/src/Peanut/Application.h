#pragma once
#include "Core.h"

namespace Peanut {

	class PEANUT_API Application
	{
		public:
			Application();
			virtual ~Application();
			void Run();

		private:
	};

	// To be defined in client
	Application* CreateApplication();

}
