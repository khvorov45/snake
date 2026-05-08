#define PLATFORM_DESKTOP_WIN32
#define RLAPI static
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wpointer-sign"
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wsign-compare"
#pragma clang diagnostic ignored "-Wunused-but-set-variable"
#include "raylib/rcore.c"
#include "raylib/rtextures.c"
#include "raylib/rtext.c"
#include "raylib/rshapes.c"
#include "raylib/rmodels.c"
#pragma clang diagnostic push

#include "example.c"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-parameter"
int
WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd) {
#pragma clang diagnostic pop
    return main();
}