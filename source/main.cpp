
#include <Guicode2/Window.hpp>
#include <Guicode2/Frame.hpp>

using namespace GuiCode;

int main()
{
	Gui _gui;

	Pointer<Frame> _frame = new Frame{ { .name = "Carrot Soup" }};
	_gui.push_back(_frame);

	while (_gui.Loop());
}