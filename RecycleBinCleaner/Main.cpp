#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <shellapi.h>
#include<stdio.h>
#include <cstdlib>

int main()
{
    HRESULT hrres=SHEmptyRecycleBin(NULL, NULL, SHERB_NOCONFIRMATION);

    return EXIT_SUCCESS;
}


