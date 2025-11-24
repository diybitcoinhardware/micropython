// Settings specific to Specter DIY project

// Enable modules used in the Python code of Specter DIY
#define MICROPY_PY_UCTYPES             (1)
#define MICROPY_PY_DEFLATE             (1) // Needed to enable MICROPY_PY_BINASCII_CRC32 as well
#define MICROPY_PY_JSON                (1)
#define MICROPY_PY_RE                  (1)
#define MICROPY_PY_RE_SUB              (1)
#define MICROPY_PY_HEAPQ               (1)
#define MICROPY_PY_HASHLIB             (1)
#define MICROPY_PY_BINASCII            (1)
#define MICROPY_PY_BINASCII_CRC32      (1)
#define MICROPY_PY_RANDOM              (1)
#define MICROPY_PY_RANDOM_EXTRA_FUNCS  (1)
#define MICROPY_PY_SELECT              (1)
#define MICROPY_PY_ASYNCIO             (1)
#define MICROPY_PY_TIME                (1)

// Include base configuration file for rest of configuration
#include <mpconfigport.h>

#if 0 // Enable in case some macros are redefined by "mpconfigport.h" or nested headers
#undef MICROPY_PY_UCTYPES
#define MICROPY_PY_UCTYPES          (1)

#undef MICROPY_PY_DEFLATE
#define MICROPY_PY_DEFLATE          (1)

#undef MICROPY_PY_JSON
#define MICROPY_PY_JSON             (1)

#undef MICROPY_PY_RE
#define MICROPY_PY_RE               (1)

#undef MICROPY_PY_RE_SUB
#define MICROPY_PY_RE_SUB           (1)

#undef MICROPY_PY_HEAPQ
#define MICROPY_PY_HEAPQ            (1)

#undef MICROPY_PY_HASHLIB
#define MICROPY_PY_HASHLIB          (1)

#undef MICROPY_PY_BINASCII
#define MICROPY_PY_BINASCII         (1)

#undef MICROPY_PY_BINASCII_CRC32
#define MICROPY_PY_BINASCII_CRC32   (1)

#undef MICROPY_PY_RANDOM
#define MICROPY_PY_RANDOM           (1)

#undef MICROPY_PY_RANDOM_EXTRA_FUNCS
#define MICROPY_PY_RANDOM_EXTRA_FUNCS (1)

#undef MICROPY_PY_SELECT
#define MICROPY_PY_SELECT           (1)

#undef MICROPY_PY_ASYNCIO
#define MICROPY_PY_ASYNCIO          (1)

#undef MICROPY_PY_TIME
#define MICROPY_PY_TIME             (1)
#endif // 0

// Allow to override static modifier for global objects, e.g. to use with
// object code analysis tools which don't support static symbols.
#ifndef STATIC
#define STATIC static
#endif
