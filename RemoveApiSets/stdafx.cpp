// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// RemoveApiSets.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"

// TODO: �� STDAFX.H ��
// �����κ�����ĸ���ͷ�ļ����������ڴ��ļ�������

//JKSDK
#include "F:\MyCppProjects\JKSDK\Lib\JKSDK.CPP"
#ifdef _M_IX86
#pragma comment(lib,"F:\\MyCppProjects\\JKSDK\\Lib\\JKSDK_ASM_LIB.lib")
#elif defined(_M_AMD64)
#pragma comment(lib,"F:\\MyCppProjects\\JKSDK\\Lib\\x64\\JKSDK_ASM_LIB.lib")
#endif