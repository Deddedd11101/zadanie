// fefwefewf.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;
typedef struct _SHFILEOPSTRUCTA;
int main()
{
	SHFILEOPSTRUCT sh;
	ZeroMemory(&sh, sizeof(SHFILEOPSTRUCT));
	sh.pFrom = L"C:\\Users\\Пользователь\\Desktop\\дщд\\*.tmp*\0";
	sh.fFlags = FOF_FILESONLY | FOF_NOCONFIRMATION;
	sh.wFunc = FO_DELETE;
	SHFileOperation(&sh);
}