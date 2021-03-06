#include <stdio.h>

/// @remarks To enable ANSI colors on Windows, add following key in the registry :
/// [HKEY_CURRENT_USER\Console] "VirtualTerminalLevel"=dword:00000001

// The main entry point for the application.
int main() {
  const size_t logo_size = 32;
  const char* logo[logo_size] = {
    "████████████████████████████████████████████████████████████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░██████████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████",
    "███████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░█████████████",
    "██████████████████████████████████████████████████████████████████████",
    "██████████████████████████████████████████████████████████████████████",
    "██████████████████████████▀▄▄▄▄▀███████▀▄▄▄▄▀█████████████████████████",
    "███████████████████████████▀▀▀▀███████▀▀▀▀▀███████████████████████████",
    "██████████████████████████      ▀████       ▀█████████████████████████",
    "███████████             ▐         ▀▀         ▐              ██████████",
    "█████████               ▐   ███   ▌▐   ███   ▐               █████████",
    "█████████               ▐   █▄▄▌  ▌▐  ▐▄▄█   ▐               █████████",
    "█████████                ▐▄  ▀▀ ▄▀  ▀▄ ▀▀  ▄▀                █████████",
    "█████████                  ▀▀▄▄▀      ▀▀▄▄▀                  █████████",
    "█████████                                                    █████████",
    "█████████                 █▄                ▌                █████████",
    "█████████                  ▌▀▀▄          ▄██                 █████████",
    "█████████                  ▐   ▀▀▄▄▄▄▄▄█▀ █▌                 █████████",
    "█████████                   ▐            ▄█                  █████████",
    "█████████                    █          ▄█                   █████████",
    "█████████                     ▀▄       █▀                    █████████",
    "█████████                       ▀▄▄▄▄██▀                     █████████",
    "█████████                                                    █████████",
    "█████████                                                    █████████",
    "█████████                                                    █████████",
    "█████████                                                    █████████",
    "█████████                                                    █████████",
    "██████████████████████████████████████████████████████████████████",
  };
  
  const char* backgroundWhite = "\033[47m";
  const char* backgroundReset = "\033[49m";
  const char* foregroundDarkGray = "\033[90m";
  const char* foregroundDarkBlue = "\033[94m";
  const char* foregroundReset = "\033[39m";
  
  for (int index = 0; index < logo_size; ++index) {
    printf("%s", (index == 0 || index == logo_size - 1 ? "       " : "     "));
    printf("%s", foregroundDarkBlue);
    printf("%s", backgroundWhite);
    printf("%s", logo[index]);
    printf("%s", foregroundReset);
    printf("%s", backgroundReset);
    printf("\n");
  }
  
  printf("%s", foregroundDarkBlue);
  printf("                                    Gammasoft                                   \n");
  printf("%s", foregroundDarkGray);
  printf(" More than thirty years of passion for high technology especially in development\n");
  printf(" (c++, c#, objective-c, ...).\n");
  printf("%s", foregroundReset);
  printf("Hello, World!\n");
}

// This code produces the following output with colors:
//
//        ████████████████████████████████████████████████████████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░██████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
//      ███████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░█████████████
//      ██████████████████████████████████████████████████████████████████████
//      ██████████████████████████████████████████████████████████████████████
//      ██████████████████████████▀▄▄▄▄▀███████▀▄▄▄▄▀█████████████████████████
//      ███████████████████████████▀▀▀▀███████▀▀▀▀▀███████████████████████████
//      ██████████████████████████      ▀████       ▀█████████████████████████
//      ███████████             ▐         ▀▀         ▐              ██████████
//      █████████               ▐   ███   ▌▐   ███   ▐               █████████
//      █████████               ▐   █▄▄▌  ▌▐  ▐▄▄█   ▐               █████████
//      █████████                ▐▄  ▀▀ ▄▀  ▀▄ ▀▀  ▄▀                █████████
//      █████████                  ▀▀▄▄▀      ▀▀▄▄▀                  █████████
//      █████████                                                    █████████
//      █████████                 █▄                ▌                █████████
//      █████████                  ▌▀▀▄          ▄██                 █████████
//      █████████                  ▐   ▀▀▄▄▄▄▄▄█▀ █▌                 █████████
//      █████████                   ▐            ▄█                  █████████
//      █████████                    █          ▄█                   █████████
//      █████████                     ▀▄       █▀                    █████████
//      █████████                       ▀▄▄▄▄██▀                     █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//        ██████████████████████████████████████████████████████████████████
//                                      Gammasoft
//      More than thirty years of passion for high technology especially in development
//      (c++, c#, objective-c, ...).
