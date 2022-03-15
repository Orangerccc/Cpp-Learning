#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

void main()
{
	// PlaySound(TEXT("D:\\CloudMusic\\1.mp3"), NULL, SND_FILENAME);
    mciSendString("D:\\CloudMusic\\1.mp3", NULL, 0, NULL);//播放

	// while (1)
	// {
	// 	cout << ("program is running... here\n")<< endl;
	// 	Sleep(1000);
	// }
	exit(0);
}