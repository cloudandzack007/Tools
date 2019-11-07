// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spzlib.pas' rev: 6.00

#ifndef spzlibHPP
#define spzlibHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spzlib
{
//-- type declarations -------------------------------------------------------
typedef Byte Bytef;

typedef Byte charf;

typedef int Int;

typedef int intf;

typedef unsigned uInt;

typedef unsigned uIntf;

typedef int Long;

typedef int uLong;

typedef int uLongf;

typedef void *voidp;

typedef void *voidpf;

typedef Byte *pBytef;

typedef int *pIntf;

typedef unsigned *puIntf;

typedef int *puLong;

typedef unsigned ptr2int;

typedef Byte zByteArray[2147483647];

typedef Byte *pzByteArray;

typedef int zIntfArray[536870911];

typedef int *pzIntfArray;

typedef unsigned zuIntArray[536870911];

typedef unsigned *PuIntArray;

typedef Byte uch;

typedef Byte uchf;

typedef Word ush;

typedef Word ushf;

typedef int ulg;

typedef unsigned Unsigned;

typedef Byte *pcharf;

typedef Byte *puchf;

typedef Word *pushf;

typedef Byte zuchfArray[2147483647];

typedef Byte *puchfArray;

typedef Word zushfArray[1073741823];

typedef Word *pushfArray;

struct inflate_huft;
typedef inflate_huft *pInflate_huft;

#pragma pack(push, 4)
struct inflate_huft
{
	Byte Exop;
	Byte bits;
	unsigned base;
} ;
#pragma pack(pop)

typedef inflate_huft huft_field[268435455];

typedef inflate_huft *huft_ptr;

typedef pInflate_huft *ppInflate_huft;

#pragma option push -b-
enum inflate_codes_mode { START, LEN, LENEXT, DIST, DISTEXT, COPY, LIT, WASH, ZEND, BADCODE };
#pragma option pop

struct inflate_codes_state;
typedef inflate_codes_state *pInflate_codes_state;

#pragma pack(push, 4)
struct spzlib__2
{
	inflate_huft *tree;
	unsigned need;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct spzlib__3
{
	unsigned get;
	unsigned dist;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct spzlib__1
{
	
	union
	{
		struct 
		{
			spzlib__3 copy;
			
		};
		struct 
		{
			unsigned lit;
			
		};
		struct 
		{
			spzlib__2 code;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct inflate_codes_state
{
	inflate_codes_mode mode;
	unsigned len;
	spzlib__1 sub;
	Byte lbits;
	Byte dbits;
	inflate_huft *ltree;
	inflate_huft *dtree;
} ;
#pragma pack(pop)

typedef int __fastcall (*check_func)(int check, pBytef buf, unsigned len);

#pragma option push -b-
enum inflate_block_mode { ZTYPE, LENS, STORED, TABLE, BTREE, DTREE, CODES, DRY, BLKDONE, BLKBAD };
#pragma option pop

struct inflate_blocks_state;
typedef inflate_blocks_state *pInflate_blocks_state;

#pragma pack(push, 4)
struct spzlib__5
{
	unsigned table;
	unsigned index;
	unsigned *blens;
	unsigned bb;
	inflate_huft *tb;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct spzlib__6
{
	inflate_huft *tl;
	inflate_huft *td;
	inflate_codes_state *codes;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct spzlib__4
{
	
	union
	{
		struct 
		{
			spzlib__6 decode;
			
		};
		struct 
		{
			spzlib__5 trees;
			
		};
		struct 
		{
			unsigned left;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct inflate_blocks_state
{
	inflate_block_mode mode;
	spzlib__4 sub;
	bool last;
	unsigned bitk;
	int bitb;
	inflate_huft *hufts;
	Byte *window;
	Byte *zend;
	Byte *read;
	Byte *write;
	check_func checkfn;
	int check;
} ;
#pragma pack(pop)

#pragma option push -b-
enum inflate_mode { METHOD, FLAG, DICT4, DICT3, DICT2, DICT1, DICT0, BLOCKS, CHECK4, CHECK3, CHECK2, CHECK1, DONE, BAD };
#pragma option pop

struct internal_state;
typedef internal_state *pInternal_state;

#pragma pack(push, 4)
struct spzlib__8
{
	int was;
	int need;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct spzlib__7
{
	
	union
	{
		struct 
		{
			unsigned marker;
			
		};
		struct 
		{
			spzlib__8 check;
			
		};
		struct 
		{
			unsigned method;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct internal_state
{
	inflate_mode mode;
	spzlib__7 sub;
	bool nowrap;
	unsigned wbits;
	inflate_blocks_state *blocks;
} ;
#pragma pack(pop)

typedef void * __fastcall (*alloc_func)(void * opaque, unsigned items, unsigned size);

typedef void __fastcall (*free_func)(void * opaque, void * address);

struct z_stream;
typedef z_stream *z_streamp;

#pragma pack(push, 4)
struct z_stream
{
	Byte *next_in;
	unsigned avail_in;
	int total_in;
	Byte *next_out;
	unsigned avail_out;
	int total_out;
	AnsiString msg;
	internal_state *state;
	alloc_func zalloc;
	free_func zfree;
	void *opaque;
	int data_type;
	int adler;
	int reserved;
} ;
#pragma pack(pop)

struct ct_data;
typedef ct_data *ct_data_ptr;

#pragma pack(push, 2)
struct spzlib__9
{
	
	union
	{
		struct 
		{
			Word code;
			
		};
		struct 
		{
			Word freq;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 2)
struct spzlib__01
{
	
	union
	{
		struct 
		{
			Word len;
			
		};
		struct 
		{
			Word dad;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 2)
struct ct_data
{
	spzlib__9 fc;
	spzlib__01 dl;
} ;
#pragma pack(pop)

typedef ct_data ltree_type[573];

typedef ct_data dtree_type[61];

typedef ct_data htree_type[39];

typedef ct_data tree_type[536870911];

typedef ct_data *tree_ptr;

typedef ct_data *ltree_ptr;

typedef ct_data *dtree_ptr;

typedef ct_data *htree_ptr;

struct static_tree_desc;
typedef static_tree_desc *static_tree_desc_ptr;

#pragma pack(push, 4)
struct static_tree_desc
{
	ct_data *static_tree;
	int *extra_bits;
	int extra_base;
	int elems;
	int max_length;
} ;
#pragma pack(pop)

struct tree_desc;
typedef tree_desc *tree_desc_ptr;

#pragma pack(push, 4)
struct tree_desc
{
	ct_data *dyn_tree;
	int max_code;
	static_tree_desc *stat_desc;
} ;
#pragma pack(pop)

typedef Word Pos;

typedef Word Posf;

typedef unsigned IPos;

typedef Word *pPosf;

typedef Word zPosfArray[1073741823];

typedef Word *pzPosfArray;

struct deflate_state;
typedef deflate_state *deflate_state_ptr;

#pragma pack(push, 4)
struct deflate_state
{
	z_stream *strm;
	int status;
	Byte *pending_buf;
	int pending_buf_size;
	Byte *pending_out;
	int pending;
	int noheader;
	Byte data_type;
	Byte method;
	int last_flush;
	unsigned w_size;
	unsigned w_bits;
	unsigned w_mask;
	Byte *window;
	int window_size;
	Word *prev;
	Word *head;
	unsigned ins_h;
	unsigned hash_size;
	unsigned hash_bits;
	unsigned hash_mask;
	unsigned hash_shift;
	int block_start;
	unsigned match_length;
	unsigned prev_match;
	bool match_available;
	unsigned strstart;
	unsigned match_start;
	unsigned lookahead;
	unsigned prev_length;
	unsigned max_chain_length;
	int level;
	int strategy;
	unsigned good_match;
	int nice_match;
	ct_data dyn_ltree[573];
	ct_data dyn_dtree[61];
	ct_data bl_tree[39];
	tree_desc l_desc;
	tree_desc d_desc;
	tree_desc bl_desc;
	Word bl_count[16];
	int heap[573];
	int heap_len;
	int heap_max;
	Byte depth[573];
	Byte *l_buf;
	unsigned lit_bufsize;
	unsigned last_lit;
	Word *d_buf;
	int opt_len;
	int static_len;
	int compressed_len;
	unsigned matches;
	int last_eob_len;
	Word bi_buf;
	int bi_valid;
	union
	{
		struct 
		{
			unsigned max_insert_length;
			
		};
		struct 
		{
			unsigned max_lazy_match;
			
		};
		
	};
} ;
#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const Shortint MAX_MEM_LEVEL = 0x9;
static const Shortint DEF_MEM_LEVEL = 0x8;
static const Shortint MAX_WBITS = 0xf;
static const Shortint DEF_WBITS = 0xf;
static const Shortint Z_NO_FLUSH = 0x0;
static const Shortint Z_PARTIAL_FLUSH = 0x1;
static const Shortint Z_SYNC_FLUSH = 0x2;
static const Shortint Z_FULL_FLUSH = 0x3;
static const Shortint Z_FINISH = 0x4;
static const Shortint Z_OK = 0x0;
static const Shortint Z_STREAM_END = 0x1;
static const Shortint Z_NEED_DICT = 0x2;
static const Shortint Z_ERRNO = 0xffffffff;
static const Shortint Z_STREAM_ERROR = 0xfffffffe;
static const Shortint Z_DATA_ERROR = 0xfffffffd;
static const Shortint Z_MEM_ERROR = 0xfffffffc;
static const Shortint Z_BUF_ERROR = 0xfffffffb;
static const Shortint Z_VERSION_ERROR = 0xfffffffa;
static const Shortint Z_NO_COMPRESSION = 0x0;
static const Shortint Z_BEST_SPEED = 0x1;
static const Shortint Z_BEST_COMPRESSION = 0x9;
static const Shortint Z_DEFAULT_COMPRESSION = 0xffffffff;
static const Shortint Z_FILTERED = 0x1;
static const Shortint Z_HUFFMAN_ONLY = 0x2;
static const Shortint Z_DEFAULT_STRATEGY = 0x0;
static const Shortint Z_BINARY = 0x0;
static const Shortint Z_ASCII = 0x1;
static const Shortint Z_UNKNOWN = 0x2;
static const Shortint Z_DEFLATED = 0x8;
#define Z_NULL (void *)(0x0)
static const Shortint STORED_BLOCK = 0x0;
static const Shortint STATIC_TREES = 0x1;
static const Shortint DYN_TREES = 0x2;
static const Shortint MIN_MATCH = 0x3;
static const Word MAX_MATCH = 0x102;
static const Word MIN_LOOKAHEAD = 0x106;
static const Shortint PRESET_DICT = 0x20;
extern PACKAGE System::SmallString<10>  ZLIB_VERSION;
static const Shortint z_errbase = 0x2;
extern PACKAGE System::SmallString<21>  z_errmsg[10];
extern PACKAGE int z_verbose;
extern PACKAGE AnsiString deflate_copyright;
static const Word MANY = 0x5a0;
extern PACKAGE unsigned inflate_mask[17];
static const Shortint LENGTH_CODES = 0x1d;
static const Word LITERALS = 0x100;
static const Word L_CODES = 0x11e;
static const Shortint D_CODES = 0x1e;
static const Shortint BL_CODES = 0x13;
static const Word HEAP_SIZE = 0x23d;
static const Shortint MAX_BITS = 0xf;
static const Shortint INIT_STATE = 0x2a;
static const Shortint BUSY_STATE = 0x71;
static const Word FINISH_STATE = 0x29a;
extern PACKAGE void __fastcall zmemcpy(pBytef destp, pBytef sourcep, unsigned len);
extern PACKAGE int __fastcall zmemcmp(pBytef s1p, pBytef s2p, unsigned len);
extern PACKAGE void __fastcall zmemzero(pBytef destp, unsigned len);
extern PACKAGE void __fastcall zcfree(void * opaque, void * ptr);
extern PACKAGE void * __fastcall zcalloc(void * opaque, unsigned items, unsigned size);
extern PACKAGE AnsiString __fastcall zError(int err);
extern PACKAGE AnsiString __fastcall zlibVersion();
extern PACKAGE void __fastcall Trace(AnsiString x);
extern PACKAGE void __fastcall Tracev(AnsiString x);
extern PACKAGE void __fastcall Tracevv(AnsiString x);
extern PACKAGE void __fastcall Tracevvv(AnsiString x);
extern PACKAGE void __fastcall Tracec(bool c, AnsiString x);
extern PACKAGE void __fastcall Tracecv(bool c, AnsiString x);
extern PACKAGE void * __fastcall ZALLOC(z_stream &strm, unsigned items, unsigned size);
extern PACKAGE void __fastcall ZFREE(z_stream &strm, void * ptr);
extern PACKAGE void __fastcall TRY_FREE(z_stream &strm, void * ptr);
extern PACKAGE int __fastcall adler32(int adler, pBytef buf, unsigned len);
extern PACKAGE int __fastcall deflateInit2(z_stream &strm, int level, int method, int windowBits, int memLevel, int strategy);
extern PACKAGE int __fastcall deflateInit_(z_streamp strm, int level, const AnsiString version, int stream_size);
extern PACKAGE int __fastcall deflateInit(z_stream &strm, int level);
extern PACKAGE int __fastcall deflateSetDictionary(z_stream &strm, pBytef dictionary, unsigned dictLength);
extern PACKAGE int __fastcall deflateReset(z_stream &strm);
extern PACKAGE int __fastcall deflateParams(z_stream &strm, int level, int strategy);
extern PACKAGE int __fastcall deflate(z_stream &strm, int flush);
extern PACKAGE int __fastcall deflateEnd(z_stream &strm);
extern PACKAGE int __fastcall deflateCopy(z_streamp dest, z_streamp source);
extern PACKAGE void __fastcall inflate_blocks_reset(inflate_blocks_state &s, z_stream &z, puLong c);
extern PACKAGE pInflate_blocks_state __fastcall inflate_blocks_new(z_stream &z, check_func c, unsigned w);
extern PACKAGE int __fastcall inflate_blocks(inflate_blocks_state &s, z_stream &z, int r);
extern PACKAGE int __fastcall inflate_blocks_free(pInflate_blocks_state s, z_stream &z);
extern PACKAGE void __fastcall inflate_set_dictionary(inflate_blocks_state &s, const Byte * d, const int d_Size, unsigned n);
extern PACKAGE int __fastcall inflate_blocks_sync_point(inflate_blocks_state &s);
extern PACKAGE pInflate_codes_state __fastcall inflate_codes_new(unsigned bl, unsigned bd, pInflate_huft tl, pInflate_huft td, z_stream &z);
extern PACKAGE int __fastcall inflate_codes(inflate_blocks_state &s, z_stream &z, int r);
extern PACKAGE void __fastcall inflate_codes_free(pInflate_codes_state c, z_stream &z);
extern PACKAGE int __fastcall inflate_fast(unsigned bl, unsigned bd, pInflate_huft tl, pInflate_huft td, inflate_blocks_state &s, z_stream &z);
extern PACKAGE int __fastcall inflateReset(z_stream &z);
extern PACKAGE int __fastcall inflateEnd(z_stream &z);
extern PACKAGE int __fastcall inflateInit2_(z_stream &z, int w, const AnsiString version, int stream_size);
extern PACKAGE int __fastcall inflateInit(z_stream &z);
extern PACKAGE int __fastcall inflateInit_(z_streamp z, const AnsiString version, int stream_size);
extern PACKAGE int __fastcall inflate(z_stream &z, int f);
extern PACKAGE int __fastcall inflateSetDictionary(z_stream &z, pBytef dictionary, unsigned dictLength);
extern PACKAGE int __fastcall inflateSync(z_stream &z);
extern PACKAGE int __fastcall inflateSyncPoint(z_stream &z);
extern PACKAGE int __fastcall inflate_trees_bits(unsigned * c, const int c_Size, unsigned &bb, pInflate_huft &tb, inflate_huft * hp, const int hp_Size, z_stream &z);
extern PACKAGE int __fastcall inflate_trees_dynamic(unsigned nl, unsigned nd, unsigned * c, const int c_Size, unsigned &bl, unsigned &bd, pInflate_huft &tl, pInflate_huft &td, inflate_huft * hp, const int hp_Size, z_stream &z);
extern PACKAGE int __fastcall inflate_trees_fixed(unsigned &bl, unsigned &bd, pInflate_huft &tl, pInflate_huft &td, z_stream &z);
extern PACKAGE int __fastcall inflate_flush(inflate_blocks_state &s, z_stream &z, int r);
extern PACKAGE void __fastcall _tr_init(deflate_state &s);
extern PACKAGE void __fastcall _tr_stored_block(deflate_state &s, pcharf buf, int stored_len, bool eof);
extern PACKAGE void __fastcall _tr_align(deflate_state &s);
extern PACKAGE int __fastcall _tr_flush_block(deflate_state &s, pcharf buf, int stored_len, bool eof);
extern PACKAGE bool __fastcall _tr_tally(deflate_state &s, unsigned dist, unsigned lc);

}	/* namespace Spzlib */
using namespace Spzlib;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spzlib
