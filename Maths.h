#pragma once
#include "Plugin.h"
#include <iostream>

class MathsPlugin : public Plugin
{
public:
	void run(PLUGIN_ARGS)
	{
		printf("%i | %i\n", PLUGIN_EXECUTE_ARGS.ayylmao, PLUGIN_EXECUTE_ARGS.kekekek);
	}

};