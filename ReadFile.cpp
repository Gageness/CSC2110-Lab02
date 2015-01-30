#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name)
{
	input_file.open(file_name);
	closed = false;
	_eof = false;

   return rf;
}

ReadFile::~Readfile()
{
   close();
}

bool eof()
{
   return _eof;
}

void close()
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

String* readLine()
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   rf->_eof = !(getline(rf->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
