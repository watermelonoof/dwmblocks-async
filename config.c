#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    /*{"sb-mail",    600,  1 },
    {"sb-music",   0,    2 },
    {"sb-disk",    1800, 3 },
    {"sb-memory",  10,   4 },
    {"sb-loadavg", 5,    5 },
    {"sb-mic",     0,    6 },
    {"sb-record",  0,    7 },
    {"sb-volume",  0,    8 },
    {"sb-battery", 5,    9 },
    {"sb-date",    1,    10},*/
	{"sb-nettraf",	1,		0},
	{"sb-cpu",		5,		2},
	{"sb-memory",	5,		3},
	{"sb-disk",		1800,	4},
	{"sb-volume",	0,		5},
	{"sb-battery",	5,		6},
	{"sb-internet",	30,		7},
	{"sb-clock",	1,		8},

};

const unsigned short blockCount = LEN(blocks);
