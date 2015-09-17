#include <iostream>
#include "PluginManager.h"
#include "Maths.h"

int main()
{
	pluginManager.registerPlugin(new MathsPlugin());

	ExampleData exampleData;

	exampleData.ayylmao = 555;

	pluginManager.run(exampleData);

	exampleData.ayylmao = 5456;
	exampleData.kekekek = 321479;

	pluginManager.run(exampleData);

	exampleData = ExampleData();

	pluginManager.run(exampleData);

	getchar();

	return 0;
}