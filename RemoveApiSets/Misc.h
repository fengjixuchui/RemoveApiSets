#pragma once

//����ժ���Ա���˽�п�

//���ز�����·�����ļ���
LPCWSTR GetFileName(LPCWSTR Path);
LPCSTR GetFileName(LPCSTR Path);

//���ز�������չ�����ļ���
CString GetFileTitleName(LPCTSTR FileName);

BOOL IsDir(LPCWSTR Path);
BOOL IsDir(LPCSTR Path);

BOOL IsFile(LPCWSTR Path);
BOOL IsFile(LPCSTR Path);


//EnumDirectoryֻ�����ö�ٻص�����lpfn����FALSEʱ�ŷ���TRUE,���ﵽƥ��ʱ
typedef BOOL(CALLBACK *DirectoryEnumProcType)(LPWIN32_FIND_DATA lpFfd,
	LPCTSTR FileFullPath, LPARAM lParam);
//ע�⣺��ʹ����bResultIncludeDirָ��ΪTRUEʱҲ�����ڻص�����lpDirectoryEnumProc�з��ر�ö�ٵĸ�Ŀ¼lpDstDir
BOOL WINAPI EnumDirectory(LPCTSTR lpDstDir, DirectoryEnumProcType lpDirectoryEnumProc, LPARAM lParam, BOOL bResultIncludeDir = FALSE);