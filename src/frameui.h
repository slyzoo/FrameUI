#pragma once
// include guard
#ifndef FrameUI 
#define FrameUI
#include <string>

namespace FrameUI{
  class Window{
  public:
    // Window size(X, Y);
    static int winSize(int a, int b);

    static string winTitle(string a);
  };
}
#endif