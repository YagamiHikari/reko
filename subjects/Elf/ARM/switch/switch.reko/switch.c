// switch.c
// Generated by decompiling switch
// using Reko decompiler version 0.8.2.0.

#include "switch.h"

// 000082F0: Register word32 _init(Register out ptr32 r10Out)
word32 _init(ptr32 & r10Out)
{
	ptr32 r10_n = call_gmon_start();
	frame_dummy();
	word32 r4_n = __do_global_ctors_aux();
	r10Out = r10_n;
	return r4_n;
}

// 00008314: void abort()
void abort()
{
}

// 00008324: void __libc_start_main()
void __libc_start_main()
{
}

// 00008334: void _start(Stack int32 dwArg00, Stack (ptr32 Eq_n) ptrArg08, Stack (ptr32 Eq_n) ptrArg0C, Stack (ptr32 void) ptrArg10)
void _start(int32 dwArg00, void (* ptrArg08)(), void (* ptrArg0C)(), void * ptrArg10)
{
	__libc_start_main(globals->ptr8364, dwArg00, fp + 0x04, globals->ptr8368, ptrArg08, ptrArg0C, ptrArg10);
	abort();
}

// 0000836C: Register word32 call_gmon_start()
word32 call_gmon_start()
{
	ptr32 r10_n = 0x8380 + globals->dw8394;
	<anonymous> * r3_n = r10_n + globals->dw8398;
	if (r3_n == null)
		return r10;
	word32 r10_n;
	word32 pc_n;
	r3_n();
	return r10_n;
}

// 0000839C: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	byte * r5_n = globals->ptr83F4;
	if ((word32) *r5_n != 0x00)
		return;
	<anonymous> *** r4_n = globals->ptr83F8;
	<anonymous> * r2_n = **r4_n;
	if (r2_n == null)
		*r5_n = 0x01;
	else
	{
		<anonymous> ** r3_n = *r4_n;
		*r4_n = (<anonymous> ***) ((char *) r3_n + 0x04);
		word32 pc_n;
		word32 r2_n;
		r2_n();
	}
}

// 000083FC: void call___do_global_dtors_aux()
void call___do_global_dtors_aux()
{
}

// 00008404: void frame_dummy()
void frame_dummy()
{
	if (*globals->ptr8424 == 0x00)
		return;
	if (globals->dw8428 == 0x00)
		return;
	word32 pc_n;
	fn00000000();
}

// 0000842C: void call_frame_dummy()
void call_frame_dummy()
{
}

// 00008434: Register Eq_n frobulate(Register Eq_n r0, Stack Eq_n dwArg00)
Eq_n frobulate(Eq_n r0, Eq_n dwArg00)
{
	__divsi3(r0 * r0, 1337);
	return dwArg00;
}

// 00008470: Register word32 bazulate(Register Eq_n r0, Register Eq_n r1)
word32 bazulate(Eq_n r0, Eq_n r1)
{
	word32 * fp_n = frobulate(r0, r1);
	word32 r0_n = __divsi3(r0 + r1, r0);
	union Eq_n * sp_n = (union Eq_n *) <invalid>;
	Eq_n r0_n = *(fp_n - 0x0018);
	word32 * fp_n = frobulate(r0_n, *sp_n);
	__divsi3(r0_n, r0_n);
	return *fp_n;
}

// 000084D4: Register word32 switcheroo(Register Eq_n r0)
word32 switcheroo(Eq_n r0)
{
	word32 * fp_n;
	switch (r0)
	{
	case 0x00:
	case 0x01:
		goto l00008540;
	case 0x02:
	case 0x03:
	case 0x04:
		fp_n = frobulate(r0, r0);
		break;
	case 0x05:
	case 0x07:
l00008540:
		fp_n = bazulate(0x00, 0x00);
		break;
	case 0x06:
		fp_n = frobulate(r0 - 0x03, r0);
		break;
	case 0x08:
		bazulate(r0, r0);
		goto l00008540;
	}
	return *(fp_n - -0x04);
}

// 0000855C: void main(Register Eq_n r0)
void main(Eq_n r0)
{
	switcheroo(r0);
}

// 00008588: Register Eq_n __divsi3(Register Eq_n r0, Register Eq_n r1)
Eq_n __divsi3(Eq_n r0, Eq_n r1)
{
	Eq_n r1_n;
	int32 ip_n = r0 ^ r1;
	Eq_n r3_n = 0x01;
	Eq_n r2_n = 0x00;
	r1_n = r1;
	if (r1 < 0x00)
		r1_n = 0x00 - r1;
	if (r1 == 0x00)
	{
		__div0(r0);
		return 0x00;
	}
	else
	{
		if (r0 < 0x00)
			r0 = 0x00 - r0;
		if (r0 >= r1_n)
		{
			do
			{
				bool C_n = SLICE(cond(r1_n - 0x10000000), bool, 1);
				if (r1_n < 0x10000000)
					C_n = SLICE(cond(r1_n - r0), bool, 1);
				if (!C_n)
				{
					r1_n <<= 0x04;
					r3_n <<= 0x04;
				}
			} while (C_n);
			do
			{
				bool C_n = SLICE(cond(r1_n - 0x80000000), bool, 1);
				if (r1_n < 0x80000000)
					C_n = SLICE(cond(r1_n - r0), bool, 1);
				if (!C_n)
				{
					r1_n <<= 0x01;
					r3_n <<= 0x01;
				}
			} while (C_n);
			do
			{
				if (r0 >= r1_n)
				{
					r0 -= r1_n;
					r2_n |= r3_n;
				}
				if (r0 >= r1_n >> 0x01)
				{
					r0 -= r1_n >> 0x01;
					r2_n |= r3_n >> 0x01;
				}
				if (r0 >= r1_n >> 0x02)
				{
					r0 -= r1_n >> 0x02;
					r2_n |= r3_n >> 0x02;
				}
				if (r0 >= r1_n >> 0x03)
				{
					r0 -= r1_n >> 0x03;
					r2_n |= r3_n >> 0x03;
				}
				bool Z_n = SLICE(cond(r0), bool, 2);
				if (r0 != 0x00)
				{
					r3_n >>= 0x04;
					Z_n = SLICE(cond(r3_n), bool, 2);
				}
				if (!Z_n)
					r1_n >>= 0x04;
			} while (Z_n);
		}
		Eq_n r0_n = r2_n;
		if (ip_n < 0x00)
			r0_n = 0x00 - r2_n;
		return r0_n;
	}
}

// 00008638: void __div0(Register Eq_n r0)
void __div0(Eq_n r0)
{
	__syscall(0x00900014);
	if (r0 >= 1000)
		return;
	__syscall(0x00900025);
}

// 00008654: void __libc_csu_init()
void __libc_csu_init()
{
	ptr32 r10_n;
	Eq_n r4_n = _init(out r10_n);
	<anonymous> * r1_n[] = r10_n + globals->dw86A8;
	int32 r3_n = r10_n + globals->dw86AC - r1_n;
	if (r4_n >= r3_n >> 0x02)
		return;
	r1_n[r4_n]();
}

// 000086B0: void __libc_csu_fini()
void __libc_csu_fini()
{
	ptr32 r10_n = 0x86C8 + globals->dw8700;
	<anonymous> * r1_n[] = r10_n + globals->dw8704;
	int32 r3_n = r10_n + globals->dw8708 - r1_n;
	int32 r4_n = (r3_n >> 0x02) - 0x01;
	if (r3_n >> 0x02 == 0x00)
		_fini();
	else
		r1_n[r4_n]();
}

// 0000870C: Register word32 __do_global_ctors_aux()
word32 __do_global_ctors_aux()
{
	ptr32 r3_n = globals->ptr8740;
	<anonymous> * r2_n = *(r3_n - 0x04);
	if (r2_n == (<anonymous> *) 0x01)
		return r4;
	word32 r4_n;
	word32 r3_n;
	word32 pc_n;
	r2_n();
	return r4_n;
}

// 00008744: void call___do_global_ctors_aux()
void call___do_global_ctors_aux()
{
}

// 0000874C: void _fini()
void _fini()
{
	__do_global_dtors_aux();
}

