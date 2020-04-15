/*****************************************************
*
* SYNwall Quark header file
*
*****************************************************/

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint8_t u8;

int quark(u8 *out, const u8 *in, u64 inlen);

#define CQUARK

#if   defined(UQUARK)
#define CAPACITY 16
#define RATE      1
#define WIDTH    17
#elif defined(DQUARK)
#define CAPACITY 20
#define RATE      2
#define WIDTH    22
#elif defined(SQUARK)
#define CAPACITY 28
#define RATE      4
#define WIDTH    32
#elif defined(CQUARK)
#define CAPACITY 40
#define RATE      8
#define WIDTH    48
#endif

#define DIGEST WIDTH

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint8_t u8;

typedef struct {
  int pos; /* number of bytes read into x from current block */
  u32 *x;  /* one bit stored in each word */
} hashState;
