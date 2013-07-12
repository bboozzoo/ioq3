#include <stdio.h>
#include <jpeglib.h>

void jpeg_mem_src (j_decompress_ptr cinfo, const JOCTET * buffer,
  size_t bufsize);
