#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.LIB")

int main()
{
	PlaySound(TEXT("C:\\Users\\54567\\source\\repos\\setprecision\\thunder.wav"), NULL, SND_FILENAME);

	while (1)
	{
		printf("program is running... here\n");
		Sleep(1000);
	}
	exit(0);
    return 0;
}