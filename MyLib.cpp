#include "MyLib.h"

#include <iostream>
#include <png.h>
#include <zlib.h>

namespace MyLib
{

void PrintInfo()
{
	std::cout << "   MyLib v3.0" << std::endl;
	std::cout << "   Compiled with libpng " << PNG_LIBPNG_VER_STRING << "; using libpng " << png_libpng_ver << "." << std::endl;
	std::cout << "   Compiled with zlib " << ZLIB_VERSION << "; using zlib " << zlib_version << " ." << std::endl;
}

}
