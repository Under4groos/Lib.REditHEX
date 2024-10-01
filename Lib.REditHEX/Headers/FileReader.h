#pragma once
#include "Includes.h"
DLLEXPORT void* file_open(const char* path)
{
	 
	return fopen(path, "w+");
}
DLLEXPORT void file_close(void* file)
{
	FILE* f;
	f = (FILE*)(file);
	fclose(f);
}
DLLEXPORT size_t file_read(void* file, void* dst, size_t bytes)
{
	FILE* f;
	f = (FILE*)(file);
	return fread(dst, 1, bytes, f);
}