#include <mach-o/dyld.h>
#include <libgen.h>
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>

extern int RunLuaFileAsWin(int argc, char** argv);

int main(int argc, char** argv)
{
    // In a .app bundle, chdir to Contents/Resources/. In flat dev layout, no-op.
    char exe[4096];
    uint32_t size = sizeof(exe);
    if (_NSGetExecutablePath(exe, &size) == 0) {
        char res[4096];
        snprintf(res, sizeof(res), "%s/../Resources", dirname(exe));
        chdir(res);
    }

    if (argc > 1) {
        return RunLuaFileAsWin(argc - 1, argv + 1);
    }
    char* def[1] = { "Launch.lua" };
    return RunLuaFileAsWin(1, def);
}
