#define FAST_OBJ_IMPLEMENTATION
#include "fast_obj.h"

#include <string>
#include <sys/types.h>
#include <unistd.h>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  char filename[256];
  sprintf(filename, "/tmp/libfuzzer.%d", getpid());

  FILE *fp = fopen(filename, "wb");
  if (!fp)
    return 0;
  fwrite(data, size, 1, fp);
  fclose(fp);

  fastObjMesh *m = fast_obj_read(filename);
  if (!m) {
    unlink(filename);
    return 0;
  }

  fast_obj_destroy(m);
  unlink(filename);
  return 0;
}