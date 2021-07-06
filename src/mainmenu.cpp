
#include "mainmenu.h"
int mainmenu::test()
{
  using namespace ftxui;
  std::vector<std::wstring> entries{
      L"Add airplane", L"remove airplane", L"add pilot", L"remove pilot", L"add flight", L"remove flight", L"report", L"EXIT"};
  int menuSelected = 0;
  auto menu = Menu(&entries, &menuSelected);
  auto container = Container::Horizontal({menu});
  auto renderer = Renderer(container, [&]
                           {
                             return hbox({
                                        menu->Render() | flex,
                                        separator(),

                                    }) |
                                    border;
                           });
  // clang-format on
  auto screen = ScreenInteractive::TerminalOutput();
  MenuBase::From(menu)->on_enter = screen.ExitLoopClosure();

  MenuBase::From(menu)->selected_style = color(Color::Blue);
  MenuBase::From(menu)->focused_style = bgcolor(Color::Blue);
  MenuBase::From(menu)->selected_focused_style = bgcolor(Color::Blue);

  screen.Loop(renderer);
}