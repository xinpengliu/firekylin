/*
 * ftell.c - obtain the value of the file-position indicator of a stream
 */

#include	"stdio_loc.h"

off_t ftell(FILE *stream)
{
	long result;
	int adjust = 0;

	if (io_testflag(stream,_IOREADING))
		adjust = -stream->_count;
	else if (io_testflag(stream,_IOWRITING)
		    && stream->_buf
		    && !io_testflag(stream,_IONBF))
		adjust = stream->_ptr - stream->_buf;
	else adjust = 0;

	result = lseek(fileno(stream), (off_t)0, SEEK_CUR);

	if ( result == -1 )
		return result;

	result += (long) adjust;
	return result;
}
