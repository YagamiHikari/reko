// STRLEN.c
// Generated by decompiling STRLEN
// using Reko decompiler version 0.8.1.0.

#include "STRLEN.h"

// 00001000: void fn00001000(Register int32 d0, Register (ptr32 byte) a0)
void fn00001000(int32 d0, byte * a0)
{
	struct Eq_n * a6_n = *(struct Eq_n **) 0x04;
	int32 d2_n = d0;
	byte * a2_n = a0;
	if (a6_n->w0014 < 0x24)
	{
		word32 * a0_n = &globals->ptr13C8;
		word32 d0_n;
		for (d0_n = 0x0C; d0_n != 0x00; --d0_n)
		{
			*a0_n = 0x00;
			++a0_n;
		}
	}
	globals->ptr13C8 = fp;
	globals->ptr13CC = a6_n;
	struct Eq_n * d0_n = FindTask(0x00);
	struct Eq_n * d0_n = OpenLibrary(0x12BC, 0x00);
	if (d0_n != null)
	{
		int32 d4_n;
		globals->ptr13D0 = d0_n;
		if (d0_n->ptr00AC == null)
		{
			d4_n = 0x02;
			d2_n = 0x08;
		}
		else
		{
			byte * a0_n = a0;
			d4_n = 0x03;
			do
			{
				if (*a0_n == 0x20)
					d4_n = SEQ(SLICE(d4_n, word16, 16), (word16) d4_n + 0x01);
				a0_n = a0_n + 0x01;
				byte * a0_n = a0_n;
			} while (*a0_n != 0x00);
		}
		int32 d0_n = d4_n << 0x02;
		ui32 d0_n = d0_n + d2_n;
		int32 d1_n = 0x00010001;
		d0_n = AllocMem(d0_n + 0x11, 0x00010001);
		if (d0_n != null)
		{
			struct Eq_n * dwLoc0C_n;
			word32 a0_n;
			d0_n->dw0000 = d0_n + 0x11;
			d0_n->dw000C = d4_n - 0x01;
			d0_n->ptr0008 = (byte *) (&d0_n->ptr0010 + d0_n / 0x0014);
			null = null;
			struct Eq_n * d0_n = d0_n->ptr00AC;
			if (d0_n == null)
			{
				fn00001214(d0_n);
				globals->ptr13D4 = d0_n;
				globals->ptr13D8 = d0_n;
				null = null;
				dwLoc0C_n = d0_n;
				Eq_n d0_n = d0_n->t0024;
				if (d0_n != 0x00)
					Enable();
				Supervisor(d0_n);
				d0_n->t0004 = d0_n;
				if (d0_n == 0x00)
				{
					fn0000127C();
					return;
				}
				globals->t13DC = d0_n;
				*(union Eq_n *) 5088 = d0_n;
				*(union Eq_n *) 0x13E4 = d0_n;
				d0_n->t009C = d0_n;
				d0_n->t00A0 = d0_n;
				word32 d0_n = ((word32[]) 0x08)[d0_n];
				if (d0_n != 0x00)
					d0_n->dw00A4 = d0_n;
l000011F8:
				a0_n = d0_n->dw003A;
				goto l00001202;
			}
			ui32 d0_n = ((ui32[]) 0x0010)[d0_n];
			byte * a1_n = d0_n->ptr0008;
			Eq_n (* a0_n)[] = (d0_n << 0x02) + 0x01;
			Eq_n d0_n = (uint32) (uint8) null[d0_n].b0000;
			Mem181[a0_n + d0_n:byte] = 0x00;
			d0_n->ptr0010 = a0_n;
			word32 * a6_n = (char *) &d0_n->ptr0010 + 0x04;
			int32 d3_n = 0x01;
			struct Eq_n * a0_n = a0 + d2_n;
			do
			{
				--a0_n;
				if (a0_n->b0000 > 0x20)
					break;
				word16 v37_n = (word16) d2_n;
				d2_n = SEQ(SLICE(d2_n, word16, 16), v37_n - 0x01);
			} while (v37_n != 0x00);
			a0_n[0x01] = (struct Eq_n) 0x00;
			do
			{
l000010E6:
				byte v40_n = *a2_n;
				++a2_n;
				d1_n = SEQ(SLICE(d1_n, word24, 8), v40_n);
				if (v40_n == 0x00)
					goto l00001148;
			} while ((byte) d1_n == 0x20 || (byte) d1_n == 0x09);
			if (d3_n - d0_n->dw000C != 0x00)
			{
				*a6_n = a1_n;
				++a6_n;
				d3_n = SEQ(SLICE(d3_n, word16, 16), (word16) d3_n + 0x01);
				if ((byte) d1_n != 0x22)
				{
					*a1_n = (byte) d1_n;
					++a1_n;
					while (true)
					{
						byte v50_n = *a2_n;
						++a2_n;
						d1_n = SEQ(SLICE(d1_n, word24, 8), v50_n);
						if (v50_n == 0x00)
							break;
						if ((byte) d1_n == 0x20)
							goto l00001116;
						*a1_n = (byte) d1_n;
						++a1_n;
					}
				}
				else
				{
					while (true)
					{
						byte v71_n = *a2_n;
						++a2_n;
						d1_n = SEQ(SLICE(d1_n, word24, 8), v71_n);
						if (v71_n == 0x00)
							break;
						if ((byte) d1_n == 0x22)
						{
l00001116:
							*a1_n = 0x00;
							++a1_n;
							goto l000010E6;
						}
						if ((byte) d1_n == 0x2A)
						{
							d1_n = SEQ(SLICE(d1_n, word24, 8), *a2_n);
							uip32 d2_n = SEQ(SLICE(d2_n, word24, 8), (byte) d1_n);
							d2_n = SEQ(SLICE(d2_n, word24, 8), (byte) d2_n & 223);
							++a2_n;
							if ((byte) d2_n == 0x4E)
								d1_n = 0x0A;
							else if ((byte) d2_n == 0x45)
								d1_n = 0x001B;
						}
						*a1_n = (byte) d1_n;
						++a1_n;
					}
				}
			}
l00001148:
			*a1_n = 0x00;
			*a6_n = 0x00;
			execPrivate4();
			globals->t13DC = d0_n;
			execPrivate5();
			*(union Eq_n *) 5088 = d0_n;
			dwLoc0C_n = (struct Eq_n *) &d0_n->ptr0010;
			dwLoc10 = d3_n;
			if (globals->ptr13CC->w0014 >= 0x24)
			{
				Eq_n v92_n = d0_n->t00E0;
				*(union Eq_n *) 0x13E4 = v92_n;
				if (v92_n != 0x00)
				{
l0000117E:
					if (d0_n->b0008 == 0x0D)
					{
						word32 * a0_n = d0_n->ptr00B0;
						a0_n = a0_n + 0x01 - *a0_n;
l00001202:
						*(word32 *) 0x13F0 = a0_n;
						*(ptr32 *) 0x13F4 = fp - 0x0010;
						fn00001354(dwLoc10, dwLoc0C_n);
						fn0000127C();
						return;
					}
					goto l000011F8;
				}
			}
			*(union Eq_n *) 0x13E4 = d0_n;
			goto l0000117E;
		}
		CloseLibrary(globals->ptr13D0);
		Alert(0x00010000);
	}
	else
		Alert(0x00038007);
	if (d0_n->ptr00AC == null)
	{
		fn00001214(d0_n);
		fn0000126C(d0_n);
	}
}

// 00001214: void fn00001214(Register (ptr32 Eq_n) a3)
void fn00001214(Eq_n * a3)
{
	WaitPort((char *) &a3->dw003A + 0x0022);
	GetMsg((char *) &a3->dw003A + 0x0022);
}

// 0000126C: void fn0000126C(Register (ptr32 Eq_n) a2)
void fn0000126C(Eq_n * a2)
{
	Forbid();
	ReplyMsg(a2);
}

// 00001278: void fn00001278(Stack word32 dwArg04)
void fn00001278(word32 dwArg04)
{
	fn0000127C();
}

// 0000127C: void fn0000127C()
void fn0000127C()
{
	ptr32 a7_n = globals->ptr13C8;
	struct Eq_n * v7_n = *(a7_n - 0x04);
	struct Eq_n * v5_n = *(a7_n - 0x08);
	if (v7_n->dw0004 != 0x00)
		execPrivate1();
	CloseLibrary(globals->ptr13D0);
	if (v5_n != null)
		fn0000126C(v5_n);
	FreeMem(v7_n, v7_n->dw0000);
}

// 000012D0: void fn000012D0(Stack word32 dwArg04)
void fn000012D0(word32 dwArg04)
{
	Eq_n a3_n[] = (Eq_n (*)[]) 0x1404;
	if (0x1404 != 0x00)
	{
		int32 d2_n = 0x01;
		if (*(word32 *) 0x1408 != 0x00)
		{
			do
				++d2_n;
			while (((word32[]) 0x1404)[d2_n] != 0x00);
		}
		int32 d2_n = d2_n - 0x01;
		if (d2_n != 0x00)
		{
			do
			{
				int32 d0_n = d2_n << 0x02;
				Eq_n a2_n = (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&a3_n[d0_n].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00];
				word32 a7_n;
				word32 a2_n;
				word32 d2_n;
				word32 d0_n;
				byte CVZN_n;
				bool Z_n;
				byte ZN_n;
				bool C_n;
				bool V_n;
				byte CVZNX_n;
				a2_n();
				d2_n = d2_n - 0x01;
			} while (d2_n != 0x01);
		}
	}
	fn00001278(dwArg04);
}

// 0000131C: void fn0000131C(Stack word32 dwArg04)
void fn0000131C(word32 dwArg04)
{
	if (*(int32 *) 5112 == 0x00)
	{
		struct Eq_n * a3_n = *(struct Eq_n **) 0x140C;
		*(int32 *) 5112 = 0x01;
		while (a3_n != null)
		{
			<anonymous> * a2_n = a3_n->ptr0004;
			word32 a7_n;
			struct Eq_n ** a3_n;
			word32 a2_n;
			byte ZN_n;
			bool C_n;
			bool V_n;
			bool Z_n;
			word32 d0_n;
			byte CVZN_n;
			a2_n();
			a3_n = (struct Eq_n *) *a3_n;
		}
		fn000012D0(dwArg04);
	}
}

// 00001354: void fn00001354(Stack int32 dwArg04, Stack (ptr32 Eq_n) dwArg08)
void fn00001354(int32 dwArg04, Eq_n * dwArg08)
{
	<anonymous> ** a3_n = (<anonymous> **) 0x1400;
	if (5116 != 0x00 && *((word32 *) 0x1400) != 0x00)
	{
		do
		{
			word32 a7_n;
			word32 a2_n;
			word32 d0_n;
			byte CVZN_n;
			bool Z_n;
			byte ZN_n;
			bool C_n;
			bool V_n;
			(*a3_n)();
		} while (*a3_n != null);
	}
	fn0000131C(fn00001390());
}

// 00001390: Register word32 fn00001390()
word32 fn00001390()
{
	return fn000013AC(&globals->b13A4);
}

// 000013AC: Register int32 fn000013AC(Stack (ptr32 byte) dwArg04)
int32 fn000013AC(byte * dwArg04)
{
	byte * a1_n = dwArg04;
	int32 d0_n = 0x00;
	while (true)
	{
		++a1_n;
		if (*a1_n == 0x00)
			break;
		++d0_n;
	}
	return d0_n;
}

