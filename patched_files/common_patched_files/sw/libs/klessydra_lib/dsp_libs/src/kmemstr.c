#include"dsp_functions.h"

__attribute__ ((always_inline)) inline int kmemstr(void* rd, void* rs1, int rs2)
{
	__asm__(
		"kmemstr %[rd], %[rs1], %[rs2];"
		://no output register
		:[rd] "r" (rd), [rs1] "r" (rs1), [rs2] "r" (rs2)
		:/*no clobbered registers*/
	);
	
	return rs2;
}
