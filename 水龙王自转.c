#include <Windows.h>
#include <stdio.h>
// #include <synchapi.h>
// #include <winuser.h>
int main() {
  printf("使用说明：\n必须以管理员身份运行.\n按住鼠标侧键,鼠标就会自动高速向右移动.\n松开侧键鼠标停止运动.");
  while (1) {
    if (GetKeyState(VK_XBUTTON1) < 0) {
      mouse_event(MOUSEEVENTF_MOVE, 800, 0, 0, 0);
    }
    Sleep(1);
  }
  return 0;
}