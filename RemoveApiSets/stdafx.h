// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

//�ñ����������ϸ����ͼ�飬�����ʾ�� Windows   Ӧ�ó�����ʹ�õľ�������ϸ�����ͼ�顣
#ifndef STRICT
#define STRICT
#endif

//https://www.gamedev.net/forums/topic/367942-win32_lean_and_mean-vs-vc_extralean/
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <locale.h>

#include <Windows.h>
#include <ntdll.h>
#pragma comment(lib,"ntdll.lib")


// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�

#include <atlstr.h>
#include <atlcoll.h>

//JKSDK
#define __DO_NOT_USE_JKSDK_OUTPUTDEBUGSTRING__
#define __DO_NOT_USE_JKSDK_TRACE__
#define __DO_NOT_USE_JKSDK_ASSERT__
#define __DO_NOT_USE_COM__
#define __DO_NOT_USE_ATL_CSTRING__
#define __DO_NOT_USE_JKSDK_CDLG__
#define __DO_NOT_USE_JKSDK_AUTOLOCK__
#define __DO_NOT_USE_JKSDK_SHOWCALLSTACKTRACK_SOURCEFILEPATHMAPPINGS__
#include "F:\MyCppProjects\JKSDK\Lib\JKSDK.H"