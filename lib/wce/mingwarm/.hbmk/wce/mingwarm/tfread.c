/*
 * Harbour 3.0.0 (Rev. 16951)
 * MinGW GNU C 4.5.2 (32-bit)
 * Generated C source from "..\hbp\..\source\tfread.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TFREAD );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TFREAD_NEW );
HB_FUNC_STATIC( TFREAD_CLASSNAME );
HB_FUNC_STATIC( TFREAD_OPEN );
HB_FUNC_STATIC( TFREAD_SEEK );
HB_FUNC_STATIC( TFREAD_CLOSE );
HB_FUNC_STATIC( TFREAD_READLINE );
HB_FUNC_STATIC( TFREAD_NAME );
HB_FUNC_STATIC( TFREAD_ISOPEN );
HB_FUNC_STATIC( TFREAD_MORETOREAD );
HB_FUNC_STATIC( TFREAD_ERROR );
HB_FUNC_STATIC( TFREAD_ERRORNO );
HB_FUNC_STATIC( TFREAD_ERRORMSG );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( FERROR );
HB_FUNC_EXTERN( FSEEK );
HB_FUNC_STATIC( F_EOL_POS );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( FREADSTR );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TFREAD )
{ "TFREAD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TFREAD_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_NEW )}, NULL },
{ "TFREAD_CLASSNAME", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_CLASSNAME )}, NULL },
{ "TFREAD_OPEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_OPEN )}, NULL },
{ "TFREAD_SEEK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_SEEK )}, NULL },
{ "TFREAD_CLOSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_CLOSE )}, NULL },
{ "TFREAD_READLINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_READLINE )}, NULL },
{ "TFREAD_NAME", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_NAME )}, NULL },
{ "TFREAD_ISOPEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_ISOPEN )}, NULL },
{ "TFREAD_MORETOREAD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_MORETOREAD )}, NULL },
{ "TFREAD_ERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_ERROR )}, NULL },
{ "TFREAD_ERRORNO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_ERRORNO )}, NULL },
{ "TFREAD_ERRORMSG", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFREAD_ERRORMSG )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NFHANDLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LEOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NLASTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NREADSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NFHANDLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "FERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERROR )}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( FSEEK )}, NULL },
{ "F_EOL_POS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( F_EOL_POS )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "CBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FREADSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREADSTR )}, NULL },
{ "NREADSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "NLASTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "(_INITSTATICS00004)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TFREAD, "..\\hbp\\..\\source\\tfread.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TFREAD
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TFREAD )
   #include "hbiniseg.h"
#endif

HB_FUNC( TFREAD )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,53,0,36,35,0,103,3,0,100,8,
		29,211,2,176,1,0,104,3,0,12,1,29,200,2,
		166,138,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,7,116,102,82,101,97,100,0,108,4,4,1,
		0,108,0,112,3,80,2,36,37,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,6,99,
		70,105,108,101,0,4,1,0,9,112,5,73,36,38,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,9,110,102,72,97,110,100,108,101,0,4,
		1,0,9,112,5,73,36,39,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,5,108,69,
		79,70,0,4,1,0,9,112,5,73,36,40,0,48,
		5,0,95,2,100,100,95,1,121,72,121,72,121,72,
		106,7,110,69,114,114,111,114,0,4,1,0,9,112,
		5,73,36,41,0,48,5,0,95,2,100,100,95,1,
		121,72,121,72,121,72,106,8,110,76,97,115,116,79,
		112,0,4,1,0,9,112,5,73,36,42,0,48,5,
		0,95,2,100,100,95,1,121,72,121,72,121,72,106,
		8,99,66,117,102,102,101,114,0,4,1,0,9,112,
		5,73,36,43,0,48,5,0,95,2,100,100,95,1,
		121,72,121,72,121,72,106,10,110,82,101,97,100,83,
		105,122,101,0,4,1,0,9,112,5,73,36,45,0,
		48,6,0,95,2,106,4,78,101,119,0,108,7,95,
		1,92,8,72,121,72,121,72,112,3,73,36,46,0,
		48,6,0,95,2,106,10,67,108,97,115,115,78,97,
		109,101,0,108,8,95,1,121,72,121,72,121,72,112,
		3,73,36,47,0,48,6,0,95,2,106,5,79,112,
		101,110,0,108,9,95,1,121,72,121,72,121,72,112,
		3,73,36,48,0,48,6,0,95,2,106,5,83,101,
		101,107,0,108,10,95,1,121,72,121,72,121,72,112,
		3,73,36,49,0,48,6,0,95,2,106,6,67,108,
		111,115,101,0,108,11,95,1,121,72,121,72,121,72,
		112,3,73,36,50,0,48,6,0,95,2,106,9,82,
		101,97,100,76,105,110,101,0,108,12,95,1,121,72,
		121,72,121,72,112,3,73,36,51,0,48,6,0,95,
		2,106,5,78,97,109,101,0,108,13,95,1,121,72,
		121,72,121,72,112,3,73,36,52,0,48,6,0,95,
		2,106,7,73,115,79,112,101,110,0,108,14,95,1,
		121,72,121,72,121,72,112,3,73,36,53,0,48,6,
		0,95,2,106,11,77,111,114,101,84,111,82,101,97,
		100,0,108,15,95,1,121,72,121,72,121,72,112,3,
		73,36,54,0,48,6,0,95,2,106,6,69,114,114,
		111,114,0,108,16,95,1,121,72,121,72,121,72,112,
		3,73,36,55,0,48,6,0,95,2,106,8,69,114,
		114,111,114,78,111,0,108,17,95,1,121,72,121,72,
		121,72,112,3,73,36,56,0,48,6,0,95,2,106,
		9,69,114,114,111,114,77,115,103,0,108,18,95,1,
		121,72,121,72,121,72,112,3,73,36,58,0,48,19,
		0,95,2,112,0,73,167,14,0,0,176,20,0,104,
		3,0,95,2,20,2,168,48,21,0,95,2,112,0,
		80,3,176,22,0,95,3,106,10,73,110,105,116,67,
		108,97,115,115,0,12,2,28,12,48,23,0,95,3,
		164,146,1,0,73,95,3,110,7,48,21,0,103,3,
		0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,116,53,0,36,62,0,103,1,0,100,8,
		28,8,106,2,13,0,25,5,103,1,0,82,1,0,
		36,63,0,103,2,0,100,8,28,8,106,2,10,0,
		25,5,103,2,0,82,2,0,36,65,0,95,2,100,
		8,31,8,95,2,122,35,28,10,36,68,0,93,0,
		16,80,2,36,71,0,95,1,100,8,28,10,36,72,
		0,106,1,0,80,1,36,75,0,48,24,0,102,95,
		1,112,1,73,36,76,0,48,25,0,102,92,255,112,
		1,73,36,77,0,48,26,0,102,120,112,1,73,36,
		78,0,48,27,0,102,121,112,1,73,36,79,0,48,
		28,0,102,122,112,1,73,36,80,0,48,29,0,102,
		106,1,0,112,1,73,36,81,0,48,30,0,102,95,
		2,112,1,73,36,83,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_CLASSNAME )
{
	static const HB_BYTE pcode[] =
	{
		36,91,0,106,7,84,70,82,69,65,68,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_OPEN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,95,0,95,1,100,8,31,27,36,96,
		0,95,1,48,31,0,102,112,0,8,31,13,36,97,
		0,48,32,0,102,120,112,1,73,36,101,0,48,33,
		0,102,112,0,92,255,8,29,160,0,36,102,0,176,
		34,0,48,31,0,102,112,0,12,1,28,23,176,34,
		0,95,1,12,1,31,14,36,103,0,48,24,0,102,
		95,1,112,1,73,36,106,0,95,2,100,8,28,9,
		36,107,0,92,64,80,2,36,109,0,48,28,0,102,
		92,2,112,1,73,36,110,0,48,25,0,102,176,35,
		0,48,31,0,102,112,0,95,2,12,2,112,1,73,
		36,111,0,48,33,0,102,112,0,92,255,8,28,30,
		36,112,0,48,27,0,102,176,36,0,12,0,112,1,
		73,36,113,0,48,26,0,102,120,112,1,73,25,71,
		36,115,0,48,27,0,102,121,112,1,73,36,116,0,
		48,26,0,102,9,112,1,73,36,117,0,25,44,36,
		120,0,48,37,0,102,121,112,1,121,8,28,15,36,
		121,0,48,26,0,102,9,112,1,73,25,17,36,123,
		0,48,27,0,102,176,36,0,12,0,112,1,73,36,
		127,0,48,29,0,102,106,1,0,112,1,73,36,129,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_SEEK )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,133,0,92,255,80,3,36,135,0,48,
		28,0,102,92,5,112,1,73,36,136,0,48,29,0,
		102,106,1,0,112,1,73,36,137,0,48,33,0,102,
		112,0,92,255,8,28,16,36,138,0,48,27,0,102,
		92,255,112,1,73,25,69,36,140,0,95,1,100,8,
		28,5,121,25,4,95,1,80,1,36,141,0,95,2,
		100,8,28,5,122,25,4,95,2,80,2,36,142,0,
		176,38,0,48,33,0,102,112,0,95,1,95,2,12,
		3,80,3,36,143,0,48,27,0,102,176,36,0,12,
		0,112,1,73,36,146,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_READLINE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,116,53,0,36,150,0,106,1,0,80,1,
		36,153,0,48,28,0,102,92,3,112,1,73,36,155,
		0,48,33,0,102,112,0,92,255,8,28,17,36,156,
		0,48,27,0,102,92,255,112,1,73,26,130,1,36,
		159,0,176,39,0,102,12,1,80,2,36,160,0,95,
		2,121,34,31,21,95,2,176,40,0,48,41,0,102,
		112,0,12,1,92,3,49,15,28,123,48,42,0,102,
		112,0,31,115,36,165,0,176,43,0,48,33,0,102,
		112,0,48,44,0,102,112,0,12,2,80,1,36,166,
		0,176,34,0,95,1,12,1,28,46,36,168,0,48,
		27,0,102,176,36,0,12,0,112,1,73,36,169,0,
		48,45,0,102,112,0,121,8,28,39,36,171,0,48,
		26,0,102,120,112,1,73,36,172,0,25,23,36,175,
		0,48,29,0,102,21,48,41,0,163,0,112,0,95,
		1,72,112,1,73,36,178,0,176,39,0,102,12,1,
		80,2,26,110,255,36,181,0,95,2,121,34,28,29,
		36,184,0,48,41,0,102,112,0,80,1,36,185,0,
		48,29,0,102,106,1,0,112,1,73,26,190,0,36,
		188,0,95,2,122,15,28,24,36,190,0,176,46,0,
		48,41,0,102,112,0,95,2,122,49,12,2,80,1,
		25,10,36,193,0,106,1,0,80,1,36,197,0,176,
		47,0,48,41,0,102,112,0,95,2,92,3,12,3,
		103,2,0,103,1,0,72,103,2,0,72,8,28,11,
		36,198,0,126,2,3,0,25,86,36,199,0,176,47,
		0,48,41,0,102,112,0,95,2,92,3,12,3,103,
		1,0,103,1,0,72,103,2,0,72,8,28,11,36,
		203,0,126,2,3,0,25,45,36,204,0,176,47,0,
		48,41,0,102,112,0,95,2,92,2,12,3,103,1,
		0,103,2,0,72,8,28,11,36,206,0,126,2,2,
		0,25,8,36,209,0,174,2,0,36,211,0,48,29,
		0,102,176,47,0,48,41,0,102,112,0,95,2,12,
		2,112,1,73,36,215,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( F_EOL_POS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,116,53,0,36,222,0,176,48,0,103,1,
		0,48,41,0,95,1,112,0,12,2,80,2,36,223,
		0,176,48,0,103,2,0,48,41,0,95,1,112,0,
		12,2,80,3,36,225,0,95,2,121,8,28,11,36,
		227,0,95,3,80,4,25,34,36,228,0,95,3,121,
		8,28,11,36,230,0,95,2,80,4,25,16,36,233,
		0,176,49,0,95,2,95,3,12,2,80,4,36,236,
		0,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_CLOSE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,240,0,48,28,0,102,92,4,112,1,
		73,36,241,0,48,26,0,102,120,112,1,73,36,243,
		0,48,33,0,102,112,0,92,255,8,28,16,36,245,
		0,48,27,0,102,92,255,112,1,73,25,54,36,248,
		0,176,50,0,48,33,0,102,112,0,20,1,36,249,
		0,48,27,0,102,176,36,0,12,0,112,1,73,36,
		250,0,48,25,0,102,92,255,112,1,73,36,251,0,
		48,26,0,102,120,112,1,73,36,254,0,95,1,100,
		8,28,5,9,25,4,95,1,28,15,36,255,0,48,
		24,0,102,106,1,0,112,1,73,36,2,1,48,29,
		0,102,106,1,0,112,1,73,36,4,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_NAME )
{
	static const HB_BYTE pcode[] =
	{
		36,8,1,48,31,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_ISOPEN )
{
	static const HB_BYTE pcode[] =
	{
		36,12,1,48,33,0,102,112,0,92,255,69,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_MORETOREAD )
{
	static const HB_BYTE pcode[] =
	{
		36,17,1,48,42,0,102,112,0,68,21,31,15,73,
		176,34,0,48,41,0,102,112,0,12,1,68,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_ERROR )
{
	static const HB_BYTE pcode[] =
	{
		36,21,1,48,45,0,102,112,0,121,69,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_ERRORNO )
{
	static const HB_BYTE pcode[] =
	{
		36,25,1,48,45,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFREAD_ERRORMSG )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,116,53,0,36,34,1,48,45,0,102,112,
		0,121,8,28,52,36,36,1,106,34,78,111,32,101,
		114,114,111,114,115,32,104,97,118,101,32,98,101,101,
		110,32,114,101,99,111,114,100,101,100,32,102,111,114,
		32,0,48,31,0,102,112,0,72,80,2,25,114,36,
		39,1,48,51,0,102,112,0,122,35,31,13,48,51,
		0,102,112,0,92,5,15,28,10,36,40,1,122,80,
		3,25,15,36,42,1,48,51,0,102,112,0,122,72,
		80,3,36,44,1,176,34,0,95,1,12,1,28,7,
		106,1,0,25,4,95,1,106,7,69,114,114,111,114,
		32,0,72,176,52,0,48,45,0,102,112,0,12,1,
		72,106,2,32,0,72,103,4,0,95,3,1,72,106,
		2,32,0,72,48,31,0,102,112,0,72,80,2,36,
		47,1,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,53,0,4,0,116,53,0,106,3,111,110,0,106,
		20,99,114,101,97,116,105,110,103,32,111,98,106,101,
		99,116,32,102,111,114,0,106,8,111,112,101,110,105,
		110,103,0,106,13,114,101,97,100,105,110,103,32,102,
		114,111,109,0,106,8,99,108,111,115,105,110,103,0,
		106,8,115,101,101,107,105,110,103,0,4,6,0,82,
		4,0,7
	};

	hb_vmExecute( pcode, symbols );
}

